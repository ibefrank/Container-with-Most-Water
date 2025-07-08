# Container With Most Water 🚰

This project provides a C++ implementation of the **"Container With Most Water"** problem, solved using the efficient two-pointer technique. The program calculates the maximum amount of water that can be contained between two vertical lines from a given list of heights.

## 🧠 Problem Description

Given an array `height[]`, where each element represents the height of a vertical line on the coordinate plane, find two lines that together with the x-axis form a container that holds the **most water**.

### Example:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49

## 💡 Approach

- Use a two-pointer strategy starting from both ends of the array.
- At each step, calculate the area formed between the two pointers.
- Move the pointer pointing to the shorter line inward to potentially find a taller container.
- Time Complexity: **O(n)**  
- Space Complexity: **O(1)**

## 🛠️ Tech Stack

- Language: **C++**
- IDE: **Visual Studio 2022**
- Libraries Used: `<vector>`, `<iostream>`, `<algorithm>`

## ▶️ How to Run in Visual Studio 2022

1. Open **Visual Studio 2022**.
2. Go to **File > New > Project**.
3. Choose **Console App (C++)** and click **Next**.
4. Name the project (e.g., `ContainerWithMostWater`) and click **Create**.
5. Replace the code in `main.cpp` with the code from this repository.
6. Press `Ctrl + F5` to **build and run** the project.


## 📄 License

This project is released for educational purposes


