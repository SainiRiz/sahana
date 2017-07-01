    #include <stdio.h>

    #include <string.h>

     

    main()

    {

        int a, b;

        int array[100],n, i;

        scanf("%d", &n);

        for (i = 0 ; i <n; i++)

            scanf("%d", &array[i]);

        if (array[0] < array[1]) {

            a= array[0];

            b = array[1];

        }

        else {

          a = array[1];

          b = array[0];

        }

        for (i = 2; i < n; i++) {

            if (array[i] < a) {

            b= a;

            a = array[i];

            }

            else if (array[i] < b) {

                b = array[i];

            }

        }

        printf(" \nSecond smallest element is %d", b);

    }
