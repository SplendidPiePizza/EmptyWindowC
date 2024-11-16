# Empty Window

This Is A Project which is just empty, no title no body no icon and nothing. You can use this for graphic designing or some meme template

## Compilation Instructions

### Using MinGW (GCC for Windows)

1. **Install MinGW**:
   If you don't have **MinGW** installed, download it from the [MinGW website](https://osdn.net/projects/mingw/releases/), and follow the installation instructions. Make sure to add the MinGW `bin` directory to your system's `PATH` to use `gcc` from the command line.

2. **Clone The Repo**
  Make sure you have git installed, then type `git clone https://github.com/SplendidPiePizza/EmptyWindowC.git`
Or Click The Code button then click Download ZIP

3. **Navigate to Your Project Directory**:
   Open **Command Prompt** (CMD) and change the directory to where the repository `.c` files are located.

4. **Compile the Code**
   Run the following gcc command to compile and link the source files:
`gcc main.c window.c -o EmptyWindowC -lgdi32 -luser32 -mwindows`
Feel free to name the executable you want.

5. **Run Binary EXE**

   Launch EmptyWindowC.exe or the executable you named.

   Note: this will work for linux, i tried it on ubuntu before and it compiled workly.

### Using Visual Studio

1. **Install Visual Studio**:
   - If you haven't already, download and install **Visual Studio** from the [official website](https://visualstudio.microsoft.com/).
   - During installation, make sure you include the **Desktop development with C++** workload to get the necessary tools for compiling C applications.

2. **Create a New Project**:
   - Open **Visual Studio**.
   - Select **File > New > Project** from the menu.
   - Choose **Empty Project** under the **C++** category (don't worry about C++, it's just the category).
   - Set the project name (e.g., `EmptyWindow`) and choose the location where you'd like to save it. Click **Create**.

3. **Add Source Files**:
   - In the **Solution Explorer**, right-click on **Source Files** and select **Add > Existing Item**.
   - Navigate to the folder where you have your `main.c` and `window.c` files, and add them to your project.

4. **Set the Subsystem to Windows**:
   - By default, Visual Studio might set the subsystem to **Console**. Since this is a Windows GUI application, you need to change the subsystem to **Windows**.
   - Right-click your project in **Solution Explorer** and select **Properties**.
   - In the **Properties** window, go to **Configuration Properties > Linker > System**.
   - Under **SubSystem**, change it to **Windows** (not Console).
   - Click **Apply** and then **OK** to close the properties window.

5. **Build the Project**:
   - Press **Ctrl + Shift + B** or go to the menu and select **Build > Build Solution**.
   - Visual Studio will compile the source code and link the necessary libraries.
   - If everything is set up correctly, the output will be displayed in the **Output** window.

6. **Run the Program**:
   - After building the project, press **Ctrl + F5** or go to **Debug > Start Without Debugging** to run the program.
   - A window should appear with a white background and no title (just like the intended output).
   
   **Note**: If you run into issues with the program not launching, make sure the project is set to use the correct subsystem (Windows) as described above.

---

### Additional Notes:
- The project will use the default libraries required for Windows GUI applications (`gdi32` and `user32`), so no additional library linking is necessary beyond the default Visual Studio setup.
- If you want to modify the window's size, background color, or title, simply edit the `settings.h` file to adjust the values.


