@echo off
set COMPILER=cl
                set COMPFLAGS=/c /Zc:__cplusplus /Zp8 /GR /W3 /EHs /nologo /MD /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0   /DMATLAB_MEX_FILE  /DMATLAB_MEX_FILE
                set OPTIMFLAGS=/O2 /Oy- /DNDEBUG
                set DEBUGFLAGS=/Z7
                set LINKER=link
                set LINKFLAGS=/nologo   /export:%ENTRYPOINT% /DLL /LIBPATH:"C:\Program Files\MATLAB\R2024b\extern\lib\win64\microsoft" libmx.lib libmex.lib libmat.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /EXPORT:mexFunction
                set LINKDEBUGFLAGS=/debug /PDB:"%OUTDIR%%MEX_NAME%.mexw64.pdb"
                set NAME_OUTPUT=/out:"%OUTDIR%%MEX_NAME%%MEX_EXT%"
set PATH=C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\MSVC\14.29.30133\bin\HostX64\x64\;C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\IDE\VC\vcpackages;C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\IDE;C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\Tools;C:\Program Files (x86)\Windows Kits\10\\Bin\10.0.19041.0\x64;C:\Program Files (x86)\Windows Kits\10\\Bin\10.0.19041.0\x86;C:\Program Files (x86)\Windows Kits\10\\Bin\x64;C:\Program Files (x86)\Windows Kits\10\\Bin\x86;;%MATLAB_BIN%;%PATH%
set INCLUDE=C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\MSVC\14.29.30133\include;C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\MSVC\14.29.30133\atlmfc\include;C:\Program Files (x86)\Windows Kits\10\\include\10.0.19041.0\ucrt;C:\Program Files (x86)\Windows Kits\10\\include\10.0.19041.0\shared;C:\Program Files (x86)\Windows Kits\10\\include\10.0.19041.0\um;C:\Program Files (x86)\Windows Kits\10\\include\10.0.19041.0\winrt;C:\Program Files\MATLAB\R2024b\extern\include;%INCLUDE%
set LIB=C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\MSVC\14.29.30133\lib\x64;C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\MSVC\14.29.30133\atlmfc\lib\x64;C:\Program Files (x86)\Windows Kits\10\\Lib\10.0.19041.0\ucrt\x64;C:\Program Files (x86)\Windows Kits\10\\lib\10.0.19041.0\um\x64;C:\Program Files\MATLAB\R2024b\lib\win64;%LIB%
set LIBPATH=C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\MSVC\14.29.30133\lib\x64;C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\MSVC\14.29.30133\atlmfc\lib\x64;%LIBPATH%

nmake -f model_sfun.mak
