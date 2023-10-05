
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <esat_extra/sqlite3.h>

struct Job
{
    int id;
    char name[16];
    int hp;
    float loot;
};


const int kJobsMaxNumber = 10;

int Callback(void *, int, char **, char **);
int CallbackJobs(void *, int, char **, char **);

int Callback(void *notused, int argc, char **argv, char **azcolname)
{
    notused = 0;

    printf("reading db");

    for (int i = 0; i < argc; i++)
    {
        printf("%s = %s\n", azcolname[i], argv[i] ? argv[i] : "NULL");
    }

    printf("\n");

    return 0;
}

int CallBackJobs(void *used, int num_columns, char** field_values, char** column_names)
{
    Job* jobs = (Job*) used;

    printf("Reading db\n");

    // Search next availible row in jobs array
    int index = 0;
    for(index = 0; index < kJobsMaxNumber; index++)
    {
        if(jobs[index].id == -1) break;

    }

    // Check wether the jobs array is full
    if (kJobsMaxNumber == index)
    {
        fprintf(stderr, "WARNING: The jobs array is full!\n");
        return 0;
    }
    // fill the job with values from database
    jobs[index].id = atoi(field_values[0]);
    strncpy(jobs[index].name, field_values[1], 16);
    jobs[index].hp = atoi(field_values[2]);
    jobs[index].loot = (float)atof(field_values[3]);
}

int main()
{
    sqlite3 *db;
    char *err_msg = 0;

    //RPG data
    Job jobs[kJobsMaxNumber];
    for (int i = 0; i < kJobsMaxNumber; i++)
    {
        jobs[i].id = -1;
        jobs[i].name[0] = '\0';
        jobs[i].hp = 0;
        jobs[i].loot = 0.0f;
    }

    int rc = sqlite3_open("DataBase.db", &db);

    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }else
    {
        printf("Data base open\n");
    }

    // char *sql = "SELECT * FROM JOBS";
    char *sql = "SELECT * FROM JOBS";

    // rc = sqlite3_exec(db, sql, Callback, 0, &err_msg);
    rc = sqlite3_exec(db, sql, CallBackJobs, (void*)jobs, &err_msg);

    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n", err_msg);

        sqlite3_free(err_msg);
        sqlite3_close(db);

        return 1;
    }

    printf("RPG JOBS: \n");
    for (int i = 0; i < kJobsMaxNumber; i++)
    {
        if (jobs[i].id != 1)
        {
            printf("JOB: %d: %s HP: %d LOOT: %F\n", jobs[i].id, jobs[i].name, jobs[i].hp, jobs[i].loot);
        }
    }
    
    sqlite3_close(db);

    return 0;
}