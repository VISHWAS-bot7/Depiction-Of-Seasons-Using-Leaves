# Depiction-Of-Seasons-Using-Leaves
This is an interactive OpenGL program that simulates the changing seasons with animated falling leaves. It uses GLUT to render graphical elements and manage user input via a right-click dropdown menu.

STEPS:
1) Download VSCode (https://code.visualstudio.com/download)
2) Download MSYS2 (https://www.msys2.org/)
3) Generate and Download Glad (https://glad.dav1d.de/)
4) Install VSCode
5) Install MSYS2
6) Put Glad on MSYS2
7) Edit Environment Variables for MSYS2
8) Configure VSCode
9) Download Extension
10) Add ExecutorMap
11) Add IncludePath
12) Testing

MSYS2 command:(MSYS2 MINGW64)
 1) pacman -Syu
 2) pacman -S mingw-w64-x86_64-toolchain
 3) pacman -S mingw-w64-x86_64-glew
 4) pacman -S mingw-w64-x86_64-glfw
 5) pacman -S mingw-w64-x86_64-freeglut

VSCODE Extension:
 1) C/C++
 2) Code Runner

VSCODE Configuration:

**Executor Map
"code-runner.executorMap": {
        "cpp": "cd $dir && g++ $env:MSYS2/mingw64/include/glad/glad.c (Get-ChildItem -Path . -Filter *.cpp -Recurse).FullName -o main -lopengl32 -lfreeglut -lglu32 -lglew32 -lglfw3 -lgdi32 -lmingw32 && ./main"
},

OPEN SETTINGS -> SEARCH -> INCLUDE PATH -> ADD PATH

**C/C++ Include path:
${env:MSYS2}/mingw64/include/**





