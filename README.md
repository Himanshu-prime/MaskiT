# Git README for Face Detection using OpenCV

This repository contains a C++ program that performs face detection using OpenCV. It captures video from the default camera and detects faces in real-time, drawing rectangles around them. Additionally, it displays a safety message based on the presence or absence of detected faces.

## Prerequisites
- OpenCV 2 or higher installed
- C++ compiler

## Installation
1. Clone the repository:
   ```
   git clone <repository_url>
   ```
2. Build the project using your C++ compiler.

## Usage
1. Make sure your camera is connected to your system.
2. Run the compiled executable:
   ```
   ./face_detection
   ```
3. The program will start capturing video from the camera and display the output window with face detection results.
4. If any faces are detected, rectangles will be drawn around them, and a warning message will be displayed: "You are not safe!".
5. If no faces are detected, a safety message will be displayed: "You are safe".

## Troubleshooting
- If the program fails to run or compile, ensure that OpenCV is properly installed and configured on your system. Refer to the official OpenCV documentation for assistance.

## Resources
The `Resources` folder in this repository contains the pre-trained cascade classifier file `nose.xml` used for face detection. You can replace it with your own trained classifier or use other pre-trained classifiers provided by OpenCV.

## License
This project is licensed under the [MIT License](LICENSE).

## Acknowledgments
- The face detection algorithm is powered by OpenCV, an open-source computer vision library. Visit the official [OpenCV website](https://opencv.org/) for more information.

Feel free to contribute to this project by submitting bug reports, feature suggestions, or pull requests. Happy coding!
