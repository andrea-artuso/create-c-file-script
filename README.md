# create-c-file-script
A simple C script to create a C file with a batch script  

## How to download and run the application
1. Click on [package](https://github.com/andrea-artuso/create-c-file-script/releases/tag/script) and download the latest version
2. Open the `.zip` file and run the `.exe` file

## How to edit the application
1. Click on [package](https://github.com/andrea-artuso/create-c-file-script/releases/tag/script) and download the latest version
2. Open and extract the `.zip` file
3. Open the folders in a code editor like Visual Studio Code
4. Make the changes you want
5. Using an ANSI C compiler (like gcc) compile all the files into a `.exe` file

## Edit the path where the folders are created
1. Click on [package](https://github.com/andrea-artuso/create-c-file-script/releases/tag/script) and download the latest version
2. Open and extract the `.zip` file
3. Open the folders in a code editor like Visual Studio Code 
4. Open the `script.bat` file inside the `src` folder
5. Change the **SECOND LINE** from `cd D:` to `cd <your_drive_label>`
6. Change the **THIRD LINE** from `cd D:\C - test_files` to `cd <absolute_path_where_file_will_be_saved>`
7. Change the **SEVENTH LINE** from `start "" "D:\C - test_files\%1\"` to `start "" "<absolute_path_where_file_will_be_saved>\%1\"`

## Bug report
If you encounter a bug in my code feel free to open a new [issue](https://github.com/andrea-artuso/create-c-file-script/issues) and write the problem.  
You can also contact me through my [website](https://www.andrea-artuso.dev) or you can send me an [email](mailto:andrea.artuso.business@gmail.com).
