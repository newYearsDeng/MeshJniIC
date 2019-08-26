package com.northmeter.meshble.jnjutils;


public class JniUtils {

    static {
        System.loadLibrary("javaECDH");
    }

    //java调C中的方法都需要用native声明且方法名必须和c的方法名一样
    public native String getString();
    public native int add(int a,int b);
    public native byte[] makeKey();
    public native byte[] sharedSecret(byte[] pub, byte[] pri);
}
