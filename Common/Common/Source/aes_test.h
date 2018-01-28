/******************************************************************************
 *
 * MODULE :AES Test functions header file
 *
 * CREATED:2018/01/27 22:56:00
 * AUTHOR :Nakanohito
 *
 * DESCRIPTION:AES Test functions (header file)
 *             AES暗号の暗号化と復号化を行う関数群です。
 *             対応するキーサイズは128bit、192bit、256bit
 *             ブロック暗号なので、余白分の対応としてPKCS#7の機能を提供する。
 *             仕様書はNISTのサイトを参照
 *             FIPS-197(http://csrc.nist.gov/publications/fips/fips197/fips-197.pdf)
 *
 * CHANGE HISTORY:
 *
 * LAST MODIFIED BY:
 *
 ******************************************************************************
 * Copyright (c) 2018, Nakanohito
 * This software is released under the BSD 2-Clause License.
 * http://opensource.org/licenses/BSD-2-Clause
 *****************************************************************************/
#ifndef AES_TEST_H_INCLUDED
#define AES_TEST_H_INCLUDED

#if defined __cplusplus
extern "C" {
#endif

/****************************************************************************/
/***        Include files                                                 ***/
/****************************************************************************/
#include <stdio.h>
#include <jendefs.h>


/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Variables                                            ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Functions                                            ***/
/****************************************************************************/
/**
 * AES処理テストケース
 */
PUBLIC void vAES_test();

#if defined __cplusplus
}
#endif

#endif  /* AES_TEST_H_INCLUDED */

/******************************************************************************/
/***        END OF FILE                                                     ***/
/******************************************************************************/
