/* Copyright (c) 2014, Razor Developers */
/* See LICENSE for licensing information */

/**
 * \file razor.h
 * \brief Headers for razor.cpp
 **/

#ifndef TOR_RAZOR_H
#define TOR_RAZOR_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* razor_tor_data_directory(
    );

    char const* razor_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

