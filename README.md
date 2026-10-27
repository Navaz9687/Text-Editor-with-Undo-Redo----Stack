# Text-Editor-with-Undo-Redo----Stack
Text Editor with Undo and Redo Using Stack in C

A simple console-based text editor in C that allows users to enter and edit text, undo previous changes, and redo undone changes. The project demonstrates the Stack data structure (LIFO – Last In, First Out) to manage editing history.

Features

- Enter and display text
- Insert text into the editor
- Delete text from the editor
- Undo the last editing operation
- Redo a previously undone operation
- Display the current text
- Maintain separate undo and redo stacks
- Clear the editor content

Technologies

- C
- GCC
- Visual Studio Code

Compile and Run (Windows PowerShell)

Run these commands from the project folder:

gcc -Wall -Wextra -std=c11 main.c -o texteditor.exe
.\texteditor.exe

If GCC is not available on your PATH, use the full path to your GCC executable or configure your PATH environment variable.

Stack Concept

LIFO means Last In, First Out. The most recent editing operation is the first operation to be undone.

- Undo Stack: Stores previous editing states so that the user can reverse changes.
- Redo Stack: Stores states that were undone, allowing the user to restore them.
- New Edit: When the user makes a new change, the redo stack is cleared because the previous redo history is no longer valid.

For example, if the user types "Hello", then adds " World", pressing Undo restores "Hello". Pressing Redo restores "Hello World".

Limitations

- The current program stores text and editing history in memory.
- Text and undo/redo history are lost when the program exits.
- The editor is console-based and does not provide a graphical user interface.
- Undo/redo history is limited by the stack capacity and available memory.
- Saving and loading text files can be added as future enhancements.

Example Test

1. Enter the text "Hello".
2. Insert " World" to produce "Hello World".
3. Display the current text. It should show "Hello World".
4. Press Undo. The text should become "Hello".
5. Press Redo. The text should become "Hello World".
6. Delete " World". The text should become "Hello".
7. Press Undo. The text should become "Hello World".
8. Make a new edit after undoing. The redo history should be cleared.

Expected Result: The text editor should correctly manage editing operations using stacks, allowing users to undo and redo changes according to the LIFO principle.
Author: Group 11

Name: Mohammad Navaz Pasha
Roll number: 20251ECE0075
Name: G Sree Sai Kiran
Roll number: 20251ECE0074
Name: Adiith Prasad K
Roll number: 20251ECE0073
Name: A Shaik Farhan Hameed
Roll number: 20251ECE0072
Name: S Jahnavi
Roll number: 20251ECE0071
