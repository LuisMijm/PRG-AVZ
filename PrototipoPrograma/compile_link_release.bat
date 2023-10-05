@cls
@echo ---------------------------------------------------
@echo  Release - Compiling src files
@echo ---------------------------------------------------
@echo off

@REM cl /nologo /O2 /Zi /GR- /EHs /MD /Wall /Fobuild\\release\\  /Fdbuild\\release\\   /I include /I "deps\esat\include" /c src\*
cl /nologo /O2 /GR- /EHs /MD /Wall /Fobuild\\release\\  /Fdbuild\\release\\   /I include /I "deps\esat\include" /c src\*

@echo ---------------------------------------------------
@echo  Linking release obj files
@echo ---------------------------------------------------
@echo off

@REM cl /nologo /O2 /Zi /GR- /EHs /MD /Wall /Febin\\release\\arkanoid.exe build\\release\\*.obj  "deps\esat\bin\ESAT.lib"  opengl32.lib user32.lib gdi32.lib shell32.lib Ws2_32.lib
cl /nologo /O2 /GR- /EHs /MD /Wall /Febin\\release\\databasetest.exe build\\release\\*.obj  "deps\esat\bin\ESAT.lib"  opengl32.lib user32.lib gdi32.lib shell32.lib Ws2_32.lib

