package com.quant.sdk;


public  class Device {

    public Device()
    {

         System.out.println("Device init\n");
    }


    public int GetDevInfo(RDevInfo rdInfo)
    {

        rdInfo.lDevStatus = 1;
        rdInfo.lVerifyState = 0;
        //String devid = "10007";
        //rdInfo.btDevId = s.getBytes();
        return 0;

    }

    public native int GetDevInfoNav(RDevInfo rdInfo);
}


