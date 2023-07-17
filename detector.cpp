#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>
using namespace cv;
using namespace std;
void main()
{int i = 0;
VideoCapture cap(0);
CascadeClassifier faceCascade;
faceCascade.load("Resources/nose.xml");
Mat img;
vector<Rect> ley;
while (true) {
cap.read(img);
faceCascade.detectMultiScale(img, ley, 3 , 20);
for (i = 0; i < ley.size(); i++)
{rectangle(img, ley[i].tl(), ley[i].br(), Scalar(127, 252, 0), 3);
if (i == 0)
{putText(img, "You are not safe!", Point(70, 62), FONT_ITALIC, 2, Scalar(0, 0, 252), 3);}
cout << i;}
if (i == 0)
{putText(img, "You are safe", Point(137, 62), FONT_HERSHEY_SCRIPT_COMPLEX, 2, Scalar(127, 252, 0), 3);}
imshow("Imange", img);
waitKey(1);}}
