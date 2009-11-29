#!/bin/sh
gppg.exe /gplex /conflicts /no-lines cql.y > cql_parser.cs
gplex.exe /noFiles /unicode /out:cql_scanner.cs cql.l
