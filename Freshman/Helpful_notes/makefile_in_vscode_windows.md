
HOW TO INSTALL MAKE IN WINDOWS VS CODE

pre-setup
- I'm using MSYSU2 enviroment
- I'm using windows 10

Steps
1. When you install MSYSU2, you will see there are a lot of MSYSU2 ... <br>
-You can search in the search bar windows or by shortcut Windows + S <br>
or <br>
-click Windows button, and scroll until seeing image below<br>
![MSYS2](../images/MSYS2%202023-05-25%20221627.png)

2. Install make in Windows
    a. open MSYS2 MINGW64
    b. type "pacman -S make"
    c. Check your make using "make --version", make sure you see like this

    ![Make_version](../images/MSYS2%202023-05-25%20221627.png)

3. Setup in VS code

    a. ![WithChatGPT](../images/setupvscode_chatgptScreenshot%202023-05-25%20222421.png)
    b. to find the path you can type "which make" in the MSYS2 MINGW64 <br>
    ![Which_make](../images/which_makeScreenshot%202023-05-25%20222753.png) <br>
    c. And follow the step a <br>
    ![json](../images/json.cScreenshot%202023-05-25%20222854.png) <br>
    d. Lastly, you can run make in the Vscode <br>
    ![Final_run](../images/final_run.png)














P.S with help of ChatGPT, Thank you very much ChatGPT
