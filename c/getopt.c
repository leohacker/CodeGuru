/* Standard Implementation of handling cmdline options.
 * 
 * Copyright (C) 2009 Leo Jiang, All Rights Reserved.
 * Author:
 *      Leo Jiang, <leo.jiang.dev@gmail.com>
 * Created:
 *      Wed May 20 13:25:51 2009
 * 
 * Tags: cmdline, option
 *
 * Commentary:
 *      
 * Version: 0.1
 * Maintainers:
 *      Leo Jiang, <leo.jiang.dev@gmail.com>, 2009.05 - Now 
 * Last-updated:
 *      Wed May 20 13:25:51 2009
 * 
 * Change log:
 *
 */

#include <stdio.h>
#include <unistd.h>

/*
 * getopt handle the one-character options.
 * options specification is defined in optstring[].
 */
int main(int argc, char *argv[])
{
    char optch;
    static char optstring[] = "gW:c";

    while ( (optch = getopt (argc, argv, optstring)) != -1) {
        switch ( optch ) {
            case 'c' :
                puts ("-c processed.");
                break;
            case 'g' :
                puts ("-g processed.");
                break;
            case 'W' :
                printf ("-W '%s' processed.\n", optarg);
                break;
            default :
                puts ("Unknown option.");
        }
    }

    for (; optind < argc ; ++optind)
    {
        printf ("argv[%d] = '%s'\n", optind, argv[optind]);
    }
    return 0;
}
