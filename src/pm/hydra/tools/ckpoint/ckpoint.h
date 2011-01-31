/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*
 *  (C) 2008 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#ifndef CKPOINT_H_INCLUDED
#define CKPOINT_H_INCLUDED

/** @file ckpoint.h */

#include "hydra.h"

/*! \addtogroup ckpoint Checkpointing Library Interface
 * @{
 */

/**
 * \brief Checkpointing information
 *
 * Contains private persistent information stored by the checkpointing
 * library.
 */
struct HYDT_ckpoint_info {
    /** \brief Checkpointing library to use */
    char *ckpointlib;

    /** \brief Storage prefix for where to store checkpointing files
     * and other associated meta-data */
    char *ckpoint_prefix;
    /** \brief checkpoint number to restart from*/
    int ckpoint_num;
};

/** \cond */
extern struct HYDT_ckpoint_info HYDT_ckpoint_info;
/** \endcond */

/**
 * \brief HYDT_ckpoint_init - Initialize the checkpointing library
 *
 * \param[in]  ckpointlib      Checkpointing library to use
 * \param[in]  ckpoint_prefix  Storage prefix for where to store checkpointing files
 * \param[in]  ckpoint_num     Checkpoint number to restart from
 *
 * This function initializes the checkpointing library requested by
 * the user.
 */
HYD_status HYDT_ckpoint_init(char *ckpointlib, char *ckpoint_prefix, int ckpoint_num);


/**
 * \brief HYDT_ckpoint_suspend - Initiate suspend of child processes
 *
 * \param[in] pgid  process group id
 * \param[in] id    proxy id
 *
 * This function is called by a proxy to suspend all of its child
 * processes.
 */
HYD_status HYDT_ckpoint_suspend(int pgid, int id);


/**
 * \brief HYDT_ckpoint_restart - Restart child processes
 *
 * \param[in] pgid       process group id
 * \param[in] id         proxy id
 * \param[in] envlist    Environment setup from before the checkpoint
 * \param[in] num_ranks  Number of child processes to restart
 * \param[in] ranks      Array of ranks of the child processes
 * \param[in] in         stdin sockets from before the checkpoint
 * \param[in] out        stdout sockets from before the checkpoint
 * \param[in] err        stderr sockets from before the checkpoint
 * \param[in] pid        array of pids of restarted processes
 *
 * This function is called by a proxy to restart all its child
 * processes. Stdin, stdout and stderr connections are
 * reestablished. The environment passed in this list is resetup for
 * each process.
 */
HYD_status HYDT_ckpoint_restart(int pgid, int id, struct HYD_env *envlist, int num_ranks,
                                int ranks[], int *in, int *out, int *err, int *pid);

/*!
 * @}
 */

#endif /* CKPOINT_H_INCLUDED */
