// Copyright (C) 2017, 2023 Mitsubishi Electric Research Laboratories (MERL)
//
// SPDX-License-Identifier: AGPL-3.0-or-later
#ifndef CLOCKCOMM_HPP
#define CLOCKCOMM_HPP

//for time measurement
#ifdef _WIN32
#include <windows.h>
#else
#include <time.h>
#endif

#ifndef _WIN32
unsigned long GetTickCount();
#endif


#endif
