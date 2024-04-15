
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "pEfq2xhoAWnhyIDs1",
    "4Yvo33",
    "aI28h1gs25p7fz2ObN1av3cl06Tak1ecODObGYFkWb2D9",
    "NtjimJPh5cTAveagOss6uT",
    "FWlhWMhIlM2U1AMdLh5L6j_hi",
    "Ueyc0qEhGX7xd3VJhzMelN2L4HN4s9sX570lCbDOX3Xg7QlFjJB6QWT094X9Ohe0c1t8TdCJ2lAnt6vPJLFf01g33qtPcT2x",
    "X5y",
    "9n_93rPHYS4PU9yBaGTrZYy",
    "Ph",
    "vytd",
    "kYb73jeIf",
    "yjh5Y4za1XYraRvbzsgFg7J5EsAgnhm3nxhCyuYSfdg0EyQCu2Ipzcn8y",
    "Gtxdsfoaw0CYZwkXwOR",
    "QXrzpljc_I0Rj_ZvJL1OrxvaoO8NC5rLtuXy1UPcahaKbfDYaoZu2SKMJHXRYHlwvWNopkDy_hLTkLAy1djp5mK5U6dPb",
    "_SqdR3f9ctFmIVdxbUJJMiMxg3it735P1RW9AGwBTV1t0kETqXKRFYG_MBqqvx5alsri",
    "1vPhh61AT8tzzy5v8b7fIDEEFC33u4Y5A4Mw8wP4QqPk9jx8cjwI162OR2EzivbKB3uVI8p7uYudXvcSI",
    "pE_GRo27nKPJiZza0nLbeG7MdgrPjkA4N23v5jH1YrGD9RVcwYsDfIUfQ_QKqlPDu4H3MKonoo5EaVcDHqfx2YwGs36BPIjK",
    "ojG0MnXOL7huDC3rnYPIGPg_aRQ8I3kiqr3r",
    "p8g62UZ6XXVjE4cYo",
    "El_rFVa_KLsRDqweKI85cwsIOjuTU1PHkgTM5jnk1T3nzoWWlkA_H7ifcJ",
    "9u0mrQnXxVmfZt4eChH_JhHqZFqhz0C6VF_JUaJBSpZ9ilKCswfoj3xxROhfWfmZDeWpE5aSQq",
    "ysbT17vcNHZzFkQiPkCpyXNLh4AwYXU1prHVA5NaKy4TT2OSGpQ9",
    "kSTixlaExIUZvvsh6KFPGzZg44XjF9l96YqySmIRojT8ZuZt5VYhSn9HJo5ffl9s",
    "Oql5eVqkrEUVBYsDJY3",
    "E_vKdwF93RZkETUtfoQmJz2HnA74uGZYnLDBEWqnnXihMZjgFf7XkH4dc4ukXfrNCsJtloi3ZU0cJ53scPWZ",
    "zF5ci1_31HzZtOFqFX_YT_whK4QOII0PrLMdIJhrIXGH45E5tVbz_6ehTnXI492rVpWTzAMMtrfvmysZg5ec_FNqhg2EIFt5Tmv",
    "k3rpxXAF",
    "06dMMrVKWsFXf19smGbSEfXXyBSJDUxiZHosVqxk",
    "WgchGe17ulpnFg5gvXV1rfpJwP7G1t_LGwuAFhfiaYP6jbDLFlJWEoT7Sh",
    "gm4jXBRZs1tGWnDbqII1UpZ69P",
    "_wK2p3mTVJcO8PYAQK",
    "SfWfr1QEI99JRGgDguUFrv_uWYY59OefkT2InCRZl8XDQt6fGCQzE32A0yKv49ioKcZQo0M5G89ZPTyI8F3",
    "f0Tkh0idNEH3DuGemHqYcW6sKTGbVlkRKyKI_mgwbySvPs7jt4Vy2gkbSKQcfI4RNQG3x3o63x_238XskH",
    "VNfO0mMRyIwSmJhGt6nk8EmTh9yBMwSS9XV3E",
    "bLR9N_Lp6uUvuDAPM2z72NX6wCEArv3vKCrx3NQdLHMtk2Xk5hgfYKvfJr2YY39Kk9SweCQ3Lefl4upad3fa95t1UFe9",
    "9ds1",
    "JMAvNQ7qvTpeB7Pra5AxYbrmIFHFHRHPI1s8q4Eg0DipTKXhMhk1_dW19CUqoa3wI8p36HGWkqHt",
    "C667RzIJKHLjSZuG9kYhYldcFNTeFXvdw5UNLUPfd",
    "_d3kMNehob6E7G7StznKH1HNX6IKcdiWvsOk_xqpQkDKYjcpWbGWf151xPQxqrDbR6",
    "0gw8IM6Ag",
    "uFss2U6iykfOzGF2kblTO2M88arbmFvVtj6vOCfd5y67s_G578ZmghgL2hZqBH2OQWlENLCqwCjGkOVQVG_I0s",
    "E_aptqO1Ohr22DzNWokfrqDkZNA8f9HBceDFDJGloHicghPPuQcheXjDkatN2hnrM_4egbCNXOjy7nhia8PjyePY",
    "qYKNTwqlSc35feKgsHJbW4FwzQp9QNuPD1hhI9gdvBu5cEjVb58xx09hoNXkFlaCAMW9JOg3kRU6Jk8zRpxqxpoeIzy_eRRr1gH",
    "TFj6BCysEkBZ9Ddb2MGDxfT_eAkFZOKz_CdefFtbA0_MqBrlnkwO7uoh",
    "mzTFUkfpXXjpShWR7ukmhAwUcZokPkuH2MugSrOHkG",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 450);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
