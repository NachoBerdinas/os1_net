
#ifndef ORB_SLAM2_TCPSOCKETIMAGEDECODER_H
#define ORB_SLAM2_TCPSOCKETIMAGEDECODER_H

#include <ctime>
#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/array.hpp>
#include <opencv2/opencv.hpp>

using boost::asio::ip::tcp;
using namespace std;
using namespace cv;

class TcpSocketImageDecoder {

public:
    void sendLocation(std::string message);
};


#endif //ORB_SLAM2_TCPSOCKETIMAGEDECODER_H
