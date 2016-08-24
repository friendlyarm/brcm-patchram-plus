/*
 * Name: daemonize.h
 *
 * Version: 1.0
 *
 * Purpose: 用于将程序作为守护进程运行的一些接口函数
 *
 * Created by: Tangzongsheng
 *
 * UNICATION CO., LTD PROPRIETARY INFORMATION
 *
 * SECURITY LEVEL - HIGHLY CONFIDENTIAL
 *
 * DO NOT COPY
 *
 * This document and the information contained in it is confidential and
 * proprietary to Unication Co., Ltd. The reproduction or disclosure, in
 * whole or in part, to anyone outside of Unication Co., Ltd. without the
 * written approval of the President of Unication Co., Ltd., under a
 * Non-Disclosure Agreement, or to any employee of Unication Co., Ltd. who
 * has not previously obtained written authorization for access from the
 * individual responsible for the document, will have a significant
 * detrimental effect on Unication Co., Ltd. and is expressly prohibited.
 * * Copyright (c) $Date: 2011/10/26 07:10:19 $ Unication Co., Ltd., Inc.
 *
 * All rights reserved
 */


#ifndef __DAEMONIZE__H__
#define __DAEMONIZE__H__

/* 用于保存进程的pid，同时用于获知是否已经有一个进程实例在运行了 */
#define LOCKFILE "/var/run/fa-network-service.pid"

/* 判断守护进程是否已经有一个实例在运行 */
extern int isAlreadyRunning();

/* 将应用程序作为守护进程运行 */
extern void daemonize(const char *cmd);

#endif

