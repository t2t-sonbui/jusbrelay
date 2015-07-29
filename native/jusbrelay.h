/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class by_creepid_jusbrelay_NativeUsbRelayManager */

#ifndef _Included_by_creepid_jusbrelay_NativeUsbRelayManager
#define _Included_by_creepid_jusbrelay_NativeUsbRelayManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     by_creepid_jusbrelay_NativeUsbRelayManager
 * Method:    relayInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_by_creepid_jusbrelay_NativeUsbRelayManager_relayInit
  (JNIEnv *, jobject);

/*
 * Class:     by_creepid_jusbrelay_NativeUsbRelayManager
 * Method:    relayExit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_by_creepid_jusbrelay_NativeUsbRelayManager_relayExit
  (JNIEnv *, jobject);

/*
 * Class:     by_creepid_jusbrelay_NativeUsbRelayManager
 * Method:    deviceEnumerate
 * Signature: ()[Lby/creepid/jusbrelay/UsbRelayDeviceInfo;
 */
JNIEXPORT jobjectArray JNICALL Java_by_creepid_jusbrelay_NativeUsbRelayManager_deviceEnumerate
  (JNIEnv *, jobject);

/*
 * Class:     by_creepid_jusbrelay_NativeUsbRelayManager
 * Method:    deviceOpen
 * Signature: (Ljava/lang/String;)Lby/creepid/jusbrelay/UsbRelayDeviceHandler;
 */
JNIEXPORT jobject JNICALL Java_by_creepid_jusbrelay_NativeUsbRelayManager_deviceOpen__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     by_creepid_jusbrelay_NativeUsbRelayManager
 * Method:    deviceOpen
 * Signature: (Lby/creepid/jusbrelay/UsbRelayDeviceInfo;)Lby/creepid/jusbrelay/UsbRelayDeviceHandler;
 */
JNIEXPORT jobject JNICALL Java_by_creepid_jusbrelay_NativeUsbRelayManager_deviceOpen__Lby_creepid_jusbrelay_UsbRelayDeviceInfo_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     by_creepid_jusbrelay_NativeUsbRelayManager
 * Method:    openRelayChannel
 * Signature: (Lby/creepid/jusbrelay/UsbRelayDeviceHandler;I)V
 */
JNIEXPORT void JNICALL Java_by_creepid_jusbrelay_NativeUsbRelayManager_openRelayChannel
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     by_creepid_jusbrelay_NativeUsbRelayManager
 * Method:    openRelayChannels
 * Signature: (Lby/creepid/jusbrelay/UsbRelayDeviceHandler;)V
 */
JNIEXPORT void JNICALL Java_by_creepid_jusbrelay_NativeUsbRelayManager_openRelayChannels
  (JNIEnv *, jobject, jobject);

/*
 * Class:     by_creepid_jusbrelay_NativeUsbRelayManager
 * Method:    closeRelayChannel
 * Signature: (Lby/creepid/jusbrelay/UsbRelayDeviceHandler;I)V
 */
JNIEXPORT void JNICALL Java_by_creepid_jusbrelay_NativeUsbRelayManager_closeRelayChannel
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     by_creepid_jusbrelay_NativeUsbRelayManager
 * Method:    closeRelayChannels
 * Signature: (Lby/creepid/jusbrelay/UsbRelayDeviceHandler;)V
 */
JNIEXPORT void JNICALL Java_by_creepid_jusbrelay_NativeUsbRelayManager_closeRelayChannels
  (JNIEnv *, jobject, jobject);

/*
 * Class:     by_creepid_jusbrelay_NativeUsbRelayManager
 * Method:    getStatus
 * Signature: (Lby/creepid/jusbrelay/UsbRelayDeviceHandler;)[Lby/creepid/jusbrelay/UsbRelayStatus;
 */
JNIEXPORT jobjectArray JNICALL Java_by_creepid_jusbrelay_NativeUsbRelayManager_getStatus
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif