#!/bin/bash

PGCONTRIB=/usr/share/pgsql/contrib
PGEXT=/usr/share/pgsql/extension

echo drop database ferriseatemplate            | psql 
echo drop database ferrisftxtemplate           | psql 

echo create database ferrisftxtemplate         | psql 
echo CREATE EXTENSION tsearch2                 | psql ferrisftxtemplate postgres
echo CREATE EXTENSION intarray                 | psql ferrisftxtemplate postgres
echo CREATE EXTENSION btree_gist               | psql ferrisftxtemplate postgres
createlang -d ferrisftxtemplate plpgsql
echo "update pg_database set datistemplate='t' where datname='ferrisftxtemplate';" | psql ferrisftxtemplate postgres
# echo "grant SELECT on table pg_ts_cfg to PUBLIC;"    | psql ferrisftxtemplate
# echo "grant SELECT on table pg_ts_cfgmap to PUBLIC;" | psql ferrisftxtemplate
# echo "grant SELECT on table pg_ts_parser to PUBLIC;" | psql ferrisftxtemplate
# echo "grant SELECT on table pg_ts_dict to PUBLIC;"   | psql ferrisftxtemplate

# echo "update pg_database set datistemplate='f' where datname='ferrisftxtemplate';" | psql

echo create database ferriseatemplate          | psql
echo CREATE EXTENSION intarray                 | psql ferriseatemplate postgres
echo CREATE EXTENSION btree_gist               | psql ferriseatemplate postgres
createlang -d ferriseatemplate plpgsql
echo "update pg_database set datistemplate='t' where datname='ferriseatemplate';" | psql ferriseatemplate postgres
