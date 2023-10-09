@cls
@echo ---------------------------------------------------
@echo  Debug - Compiling src files
@echo ---------------------------------------------------
@echo off

cl /nologo /Zi /GR- /EHs /MDd /W3 /Fobuild\\debug\\  /Fdbuild\\debug\\   /I include /I "deps\esat\include" /c src\*

@echo ---------------------------------------------------
@echo  Linking debug obj files
@echo ---------------------------------------------------
@echo off

cl /nologo /Zi /GR- /EHs /MDd /W3 /Febin\\debug\\imguitest_d.exe build\\debug\\*.obj  "deps\esat\bin\ESAT_d.lib"  opengl32.lib user32.lib gdi32.lib shell32.lib Ws2_32.lib /link /IGNORE:4099


