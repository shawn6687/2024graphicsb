///File-New-EmptyFile�ť��ɮ� week05-1_opencv.cpp
#include <opencv/highgui.h>///�ϥ�OpenCV������GUT�~��
int main()
{///�j�gI,�p�gpl (Intel performance library)
    IplImage * img=cvLoadImage("c:/mickey.jpg");
    ///�j�g��Image ���ɽЩ�b C:�ڥؿ��Amicky.jpg
    cvShowImage("img",img);///�q��(��ӰѼƤ��T�w)
    cvWaitKey(0);///�����N��A�A�~��
}
