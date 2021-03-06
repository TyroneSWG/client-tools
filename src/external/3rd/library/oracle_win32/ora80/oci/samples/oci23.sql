rem
rem $Header: oci23.sql 14-jul-99.14:18:28 mjaeger Exp $
rem
rem Copyright (c) 1995, 1999, Oracle Corporation.  All rights reserved.
rem
rem    NAME
rem      oci23.sql
rem    DESCRIPTION
rem      Script for A22400 OCI Techniques White Paper
rem      Demo script for oci23.c
rem    MODIFIED   (MM/DD/YY)
rem     mjaeger    07/14/99 - bug 808870: OCCS: convert tabs, no long lines
rem     cchau      08/18/97 - enable dictionary protection
rem     emendez    06/16/97 -
rem     echen      01/10/97 -  change internal to sys/change_on_install
rem     vraghuna   03/01/95 -  Creation

rem
rem Create a new user - call it ocitest
rem
connect sys/knl_test7 as sysdba;
drop user ocitest cascade;
create user ocitest identified by ocitest;
grant connect, resource to ocitest;

rem
rem Created needed tables
rem
connect ocitest/ocitest;

create table oci23tab (one number not null, two long, three date,
                four char(10));

