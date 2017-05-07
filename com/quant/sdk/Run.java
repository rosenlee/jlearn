package com.quant.sdk;


public class Run{

     public static void main(String[] args)
     {
         System.loadLibrary("sdk");
         System.out.println("sdk begin...\n");
         RDevInfo rdInfo = new RDevInfo();
         Device dev = new Device();
         dev.GetDevInfo(rdInfo);

         System.out.println("rdInfo.lDevStatus:\t"+rdInfo.lDevStatus);
         System.out.println("rdInfo.sKeyVersion:\t"+rdInfo.sKeyVersion);

         dev.GetDevInfoNav(rdInfo);
         System.out.println("after dev.GetDevInfoNav rdInfo.lDevStatus:\t"+rdInfo.lDevStatus);
         System.out.println("after dev.GetDevInfoNav rdInfo.sKeyVersion:\t"+rdInfo.sKeyVersion);


     }
}
