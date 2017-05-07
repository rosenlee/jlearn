#include "com_quant_sdk_Device.h"

#include <iostream>

using namespace std;

/*
 *  * Class:     com_quant_sdk_Device
 *   * Method:    GetDevInfoNav
 *    * Signature: (Lcom/quant/sdk/RDevInfo;)I
 *     */
JNIEXPORT jint JNICALL Java_com_quant_sdk_Device_GetDevInfoNav
  (JNIEnv *env, jobject jobj1, jobject jobj2)
{

    cout<<"Hello Native Test !"<<endl;  


    //因为test不是静态函数，所以传进来的就是调用这个函数的对象  
    //    //否则就传入一个jclass对象表示native()方法所在的类  
    //即Device类
    jclass navClsDev = env->GetObjectClass(jobj1);  
    jclass navClsRdInfo = env->GetObjectClass(jobj2);  

    //得到jfieldID  
    jfieldID fID_DevStatus = env->GetFieldID(navClsRdInfo ,"lDevStatus", "J");

    //修改number属性的值  
    env->SetLongField(jobj2, fID_DevStatus, 18880L);    
    jint number= env->GetIntField(jobj2, fID_DevStatus);    
    cout<<number<<endl;//18880  

    //得到jfieldID  
    jfieldID fID_KeyVersion= env->GetFieldID(navClsRdInfo ,"sKeyVersion", "Ljava/lang/String;");

    //jobect == jstring
    jobject   keyVersion = env->GetObjectField(jobj2, fID_KeyVersion);  
    jstring   keyVersionStr = (jstring)env->GetObjectField(jobj2, fID_KeyVersion);  

    const char* str;  
    str = env->GetStringUTFChars(keyVersionStr, false);  
    if(NULL == str)
    {

        cout << "str is null!!!!" << endl;
    }
    else
    
    {
        cout <<"str is:\t "<< str << endl;
    }

    env->ReleaseStringUTFChars(keyVersionStr, str);  
    char* tmpstr = "V1.0.2007";  
    jstring rtstr = env->NewStringUTF(tmpstr);  
    if(rtstr != NULL)
    {

        (env)->SetObjectField(jobj2, fID_KeyVersion, rtstr);
        cout <<"SetObjectField success."<< endl;
    }
    else
    {
        cout << "NewStringUTF failed!!!"  << endl;
    }


 
    return 0;

    /*
    //得到jfieldID  
    jfieldID fID_DevStatus1 = env->GetFieldID(navClsRdInfo ,"lDevStatus","(Lcom/quant/sdk/RDevInfo;)J");  

    //修改number属性的值  
    env->SetLongField(jobj2, fID_DevStatus, 18880L);    
    jint number= env->GetIntField(jobj2, fID_DevStatus);    
    cout<<number<<endl;//18880  
    */


}
