#! /usr/local/bin/perl

#Date & Time:

use POSIX qw/strftime/;

NIC->variable("DATE") = strftime("%d.%m.%Y", localtime);

NIC->variable("YEAR") = strftime("%Y", localtime);

#User Email:

NIC->prompt("USEREMAIL", "Your Email Address", {default => ""});
