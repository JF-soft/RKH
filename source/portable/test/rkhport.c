/*
 *  --------------------------------------------------------------------------
 *
 *                                Framework RKH
 *                                -------------
 *
 *            State-machine framework for reactive embedded systems
 *
 *                      Copyright (C) 2010 Leandro Francucci.
 *          All rights reserved. Protected by international copyright laws.
 *
 *
 *  RKH is free software: you can redistribute it and/or modify it under the
 *  terms of the GNU General Public License as published by the Free Software
 *  Foundation, either version 3 of the License, or (at your option) any
 *  later version.
 *
 *  RKH is distributed in the hope that it will be useful, but WITHOUT ANY
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 *  more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with RKH, see copying.txt file.
 *
 *  Contact information:
 *  RKH web site:   http://sourceforge.net/projects/rkh-reactivesys/
 *  e-mail:         francuccilea@gmail.com
 *  ---------------------------------------------------------------------------
 */

/**
 *  \file       rkhport.c
 *  \ingroup    prt
 *
 *  \brief      Symbolic port to test the framework.
 */

#include "rkh.h"

RKH_MODULE_NAME(rkhport)
RKH_MODULE_VERSION(rkhport, 1.00)
RKH_MODULE_DESC(rkhport, "Symbolic port to test the framework")

void
rkh_enter_critical(void)
{
}

void
rkh_exit_critical(void)
{
}

void
rkh_set_tickrate(rui32_t tick_rate_hz)
{
}

const
char *
rkh_get_port_version(void)
{
    return RKH_MODULE_GET_VERSION();
}

const
char *
rkh_get_port_desc(void)
{
    return RKH_MODULE_GET_DESC();
}

void
rkh_fwk_init(void)
{
}

void
rkh_fwk_enter(void)
{
}

void
rkh_fwk_exit(void)
{
}
/* ------------------------------ End of file ------------------------------ */