# Update ubuntu packages
apt-get update

# Install Eigen 3.3
apt-get -y install libeigen3-dev

# Install Boost
apt-get -y install libboost-all-dev

# Pangolin dependencies
apt-get -y install libglew-dev
apt-get -y install cmake
apt-get -y install libpython2.7-dev

# OpenCV Dependencies
apt-get -y install build-essential \
	wget \
	git \
	libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev \
	python-dev python-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev \
	libtiff-dev libjasper-dev libdc1394-22-dev

# Install OpenCV
git clone https://github.com/opencv/opencv.git
cd opencv
mkdir build
cd build
cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local ..
make -j7
make install
cd ..
cd ..

# Install Pangolin
git clone https://github.com/stevenlovegrove/Pangolin.git && \
	cd Pangolin && \
	mkdir build && \
	cd build && \
	cmake .. && \
	cmake --build . && \
	cd .. && \
	cd ..