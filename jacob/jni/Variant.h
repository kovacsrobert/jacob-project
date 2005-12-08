/*
 * Copyright (c) 1999-2004 Sourceforge JACOB Project.
 * All rights reserved. Originator: Dan Adler (http://danadler.com).
 * Get more information about JACOB at http://sourceforge.net/projects/jacob-project
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
#include <jni.h>
/* Header for class com_jacob_com_Variant */

#ifndef _Included_com_jacob_com_Variant
#define _Included_com_jacob_com_Variant
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jacob_com_Variant
 * Method:    toInt
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jacob_com_Variant_toInt
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toDate
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_jacob_com_Variant_toDate
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toBoolean
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jacob_com_Variant_toBoolean
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toEnumVariant
 * Signature: ()Lcom/jacob/com/EnumVariant;
 */
JNIEXPORT jobject JNICALL Java_com_jacob_com_Variant_toEnumVariant
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putNull
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putNull
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    cloneIndirect
 * Signature: ()Lcom_jacob_com_Variant;
 */
JNIEXPORT jobject JNICALL Java_com_jacob_com_Variant_cloneIndirect
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toDouble
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_jacob_com_Variant_toDouble
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toCurrency
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_jacob_com_Variant_toCurrency
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putShortRef
 * Signature: (S)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putShortRef
  (JNIEnv *, jobject, jshort);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putIntRef
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putIntRef
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putDoubleRef
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putDoubleRef
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putDateRef
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putDateRef
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putStringRef
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putStringRef
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getShortRef
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_com_jacob_com_Variant_getShortRef
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getIntRef
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jacob_com_Variant_getIntRef
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putShort
 * Signature: (S)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putShort
  (JNIEnv *, jobject, jshort);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getShort
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_com_jacob_com_Variant_getShort
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getDoubleRef
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_jacob_com_Variant_getDoubleRef
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getDateRef
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_jacob_com_Variant_getDateRef
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getStringRef
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jacob_com_Variant_getStringRef
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    com_jacob_com_VariantClear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_com_jacob_com_VariantClear
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toDispatch
 * Signature: ()LDispatch;
 */
JNIEXPORT jobject JNICALL Java_com_jacob_com_Variant_toDispatchObject
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    clone
 * Signature: ()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_jacob_com_Variant_clone
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jacob_com_Variant_toString
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getInt
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jacob_com_Variant_getInt
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getDate
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_jacob_com_Variant_getDate
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putInt
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putInt
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putDate
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putDate
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toByte
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_com_jacob_com_Variant_toByte
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getBoolean
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jacob_com_Variant_getBoolean
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getByte
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_com_jacob_com_Variant_getByte
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putBoolean
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putBoolean
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putByte
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putByte
  (JNIEnv *, jobject, jbyte);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toError
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jacob_com_Variant_toError
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putEmpty
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putEmpty
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putEmpty
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putNothing
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getError
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jacob_com_Variant_getError
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putError
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putError
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getDouble
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_jacob_com_Variant_getDouble
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putCurrency
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putCurrency
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putObject
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putDispatchObject
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putDouble
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putDouble
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getCurrency
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_jacob_com_Variant_getCurrency
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putFloatRef
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putFloatRef
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putCurrencyRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putCurrencyRef
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putErrorRef
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putErrorRef
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putBooleanRef
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putBooleanRef
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putObjectRef
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putObjectRef
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putByteRef
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putByteRef
  (JNIEnv *, jobject, jbyte);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jacob_com_Variant_getString
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putString
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getFloatRef
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_jacob_com_Variant_getFloatRef
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getCurrencyRef
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_jacob_com_Variant_getCurrencyRef
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getErrorRef
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jacob_com_Variant_getErrorRef
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getBooleanRef
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jacob_com_Variant_getBooleanRef
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getByteRef
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_com_jacob_com_Variant_getByteRef
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toFloat
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_jacob_com_Variant_toFloat
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toSafeArray
 * Signature: (Z)Lcom/jacob/com/SafeArray;
 */
JNIEXPORT jobject JNICALL Java_com_jacob_com_Variant_toSafeArray
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putSafeArrayRef
 * Signature: (LSafeArray;)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putSafeArrayRef
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putSafeArray
 * Signature: (LSafeArray;)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putSafeArray
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    noParam
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_noParam
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getFloat
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_jacob_com_Variant_getFloat
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    putFloat
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_putFloat
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_jacob_com_Variant
 * Method:    changeType
 * Signature: (S)V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_changeType
  (JNIEnv *, jobject, jshort);

/*
 * Class:     com_jacob_com_Variant
 * Method:    getvt
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_com_jacob_com_Variant_getvt
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    toShort
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_com_jacob_com_Variant_toShort
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_release
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jacob_com_Variant_init
  (JNIEnv *, jobject);

JNIEXPORT jbyteArray JNICALL Java_com_jacob_com_Variant_SerializationWriteToBytes
  (JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_com_jacob_com_Variant_SerializationReadFromBytes
  (JNIEnv *, jobject, jbyteArray);
  
/*
 * Class:     com_jacob_com_Variant
 * Method:    isNull
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jacob_com_Variant_isNull
  (JNIEnv *, jobject);

/*
 * Class:     com_jacob_com_Variant
 * Method:    zeroVariant
 * Signature: ()V
 *
 * This should only be used on variant objects created by the
 * com layer as part of a call through EventProxy.
 * This zeros out the variant pointer in the Variant object
 * so that the calling COM program can free the memory.
 * instead of both the COM program and the Java GC doing it.
 */
void zeroVariant (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
