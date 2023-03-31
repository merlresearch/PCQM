// Copyright (C) 2017, 2023 Mitsubishi Electric Research Laboratories (MERL)
//
// SPDX-License-Identifier: AGPL-3.0-or-later
#include "clockcom.hpp"

#ifndef _WIN32
unsigned long GetTickCount()
{
  struct timespec ts;
  unsigned long tv_sec;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  tv_sec = ts.tv_sec;
  return (tv_sec * 1000 + ts.tv_nsec / 1000000);
}
#endif
