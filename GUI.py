from tkinter import *
import os
import subprocess
fileName = ""
def printText():
     
    test = textBody.get("1.0", "end-1c") 
    print(test)
    testCase = open("testCase.txt","w")
    testCase.write(test)
    testCase.close()

    #os.system("./a.out < ./testCase.txt")
    result = subprocess.getoutput('./a.out < ./testCase.txt | grep "error"')
    #result = subprocess.check_output("./a.out < ./testCase.txt",stderr=subprocess.STDOUT,shell=True)
    
    
    print("result------------------------------------------------------")
    print(result)
    os.system("rm testCase.txt")
    
    print(result)
    if result.find("error") == -1:
        result = "Compiled succcessfully"
        consoleWindow.config(text=result,fg="green")
    else:
        consoleWindow.config(text=result,fg="red")
    
def openDialogBox():
    from tkinter import filedialog
   
    root.fileName = filedialog.askopenfilename(filetypes=(("cpp files", ".cpp"), ("All files","*.*")))

    print("file name "+root.fileName)
    root.title("cpp file = "+root.fileName)
    text1 = open(root.fileName).read()
    print(text1)
    textBody.delete("1.0",END)
    textBody.insert(END,text1)
        
root = Tk()
root.title('DodaPlusPluscompiler')
topFrame = Frame(root)
topFrame.pack(side=TOP)
b = Button(topFrame,text="open cpp file",command=openDialogBox,font="Arial")
b.pack(side=LEFT)
b2 = Button(topFrame,text="compile",command=printText,font="Arial")
b2.pack(side=RIGHT)
sb = Scrollbar(root)
sb.pack(side=RIGHT,fill=Y)
textBody = Text(root,font="Consolas",yscrollcommand=sb.set)
textBody.pack(fill=BOTH)

consoleWindow = Label(root,text="Console",fg="black",font="Consolas")
consoleWindow.pack(side=LEFT)
root.mainloop()