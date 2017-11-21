#include "TcpSocketImageDecoder.h"

void TcpSocketImageDecoder::sendLocation(std::string message)
{
    try
    {
        boost::asio::io_service io_service;

        tcp::resolver resolver(io_service);
        tcp::resolver::query query("localhost", "7001");
        tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);

        tcp::socket socket(io_service);
        boost::asio::connect(socket, endpoint_iterator);

        boost::array<char, 256> buf;
        std::copy(message.begin(),message.end(),buf.begin());

        boost::system::error_code error;
        boost::asio::write(socket,boost::asio::buffer(buf, message.size()), error);
        socket.close();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}