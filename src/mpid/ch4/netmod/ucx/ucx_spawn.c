/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2016 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 *  Portions of this code were written by Mellanox Technologies Ltd.
 *  Copyright (C) Mellanox Technologies Ltd. 2016. ALL RIGHTS RESERVED
 */

#include "mpidimpl.h"
#include "ucx_impl.h"

int MPIDI_UCX_mpi_open_port(MPIR_Info * info_ptr, char *port_name)
{
    int mpi_errno = MPI_SUCCESS;
  fn_exit:
    return mpi_errno;
  fn_fail:
    goto fn_exit;

}

int MPIDI_UCX_mpi_close_port(const char *port_name)
{
    int mpi_errno = MPI_SUCCESS;
  fn_exit:
    return mpi_errno;
  fn_fail:
    goto fn_exit;

}

int MPIDI_UCX_mpi_comm_connect(const char *port_name, MPIR_Info * info, int root, int timeout,
                               MPIR_Comm * comm_ptr, MPIR_Comm ** newcomm)
{
    int mpi_errno = MPI_SUCCESS;

  fn_exit:
    return mpi_errno;
  fn_fail:
    goto fn_exit;



}

int MPIDI_UCX_mpi_comm_disconnect(MPIR_Comm * comm_ptr)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_COMM_DISCONNECT);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_COMM_DISCONNECT);



  fn_exit:
    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_COMM_DISCONNECT);
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}

int MPIDI_UCX_mpi_comm_accept(const char *port_name, MPIR_Info * info, int root,
                              MPIR_Comm * comm_ptr, MPIR_Comm ** newcomm)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_COMM_ACCEPT);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_COMM_ACCEPT);



  fn_exit:
    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_COMM_ACCEPT);
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}
