@echo off

REM Get the file name
set file_name=%1

REM Get the input variable
set input_variable=%1

REM Remove the path from the input variable
set inputFileName=%~n1
echo %inputFileName%

REM Append .exe to the file name
set outfile=%inputFileName%.exe

echo %outfile%
g++ -o %outfile% %1

REM Check the status of the last command
IF %ERRORLEVEL% NEQ 0 (
	echo "Compilation Failed .........."
    EXIT /B 1
)ELSE (

	
	echo  "Compilation Successful......."
	)


