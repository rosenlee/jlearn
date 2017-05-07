

INCLUDE=-I/usr/java/jdk1.8.0_121/include\
		-I/usr/java/jdk1.8.0_121/include/linux\
		-I/home/rosen/qt/qumtsvn/java



TARGET:
	g++ -shared -fPIC $(INCLUDE) com_quant_sdk_Device.cpp -o libsdk.so
install:
	cp libsdk.so ./com/quant/sdk/
