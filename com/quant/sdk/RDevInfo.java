package com.quant.sdk;


public  class RDevInfo{

    public long lDevStatus;             //设备状态
    public long lVerifyState;           //校验状态
    public byte btIssuer[];          //运营ID
    public byte btDevId[];           //设备ID
    public byte btManufacturerId[];  //生产ID
    public byte btUserInfo[];        //用户信息
    public String sKeyVersion;          //密钥版本号

    public RDevInfo()
    {

        lDevStatus = 0;
        lVerifyState  = 0;
        btIssuer = new byte [128];
        sKeyVersion = new String("v1.0.1");
    }

}


