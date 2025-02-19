
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izdelaj(char** nizi, int indeks, const char* niz) {
    nizi[indeks] = malloc((strlen(niz) + 1) * sizeof(char));
    strcpy(nizi[indeks], niz);
}

int main() {
    int n = 147;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 1, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 2, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 3, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 4, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 5, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 6, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 7, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 8, "GMDdWVw5tB8l5suGPcrkfrHmch90SXSyO1XrVG2zgBOSfX9ACsnjTMfC8fW6jy5uGqT5f");
    izdelaj(nizi, 9, "DECiFtjzXDfEGid2XDmwB4ulL8SDktiqJGj8QPck5VXyl7D0L2EcNJuX_HMKQE");
    izdelaj(nizi, 10, "PdEqqhB");
    izdelaj(nizi, 11, "g9FkkcpUz3cEFO_mIVaNx9qU8ul_H0fJQ2tKX");
    izdelaj(nizi, 12, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 13, "7eExRkmnpFZT3KonaIIvnSTBmlzJmZpSyQ_wqK4SDsTTRbn");
    izdelaj(nizi, 14, "yxWICLWUi1T_BuQoj0IQ8Gae_XthrxjbtAN5XcJIX6IYhHhaN");
    izdelaj(nizi, 15, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 16, "q1q2Lrf54RVrNKo1eMtySGVdIqILib824rrHds3DZHjWDFNO7DxF");
    izdelaj(nizi, 17, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 18, "BknQ5gALAQ12gZhjGIhFBYTSDl1qi6d7_2RaHUQlolhm6rqipEnxigIG_TgvZVJCs1cMICmnnmbNx5tDe8F0K");
    izdelaj(nizi, 19, "3vb0b_b8TUXt7nqefCPCWEBRsh5dQN9af4ClUci0ShCw7ucrORNRKCGFhmk4Nn55NmJqiC6BNM");
    izdelaj(nizi, 20, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 21, "3vb0b_b8TUXt7nqefCPCWEBRsh5dQN9af4ClUci0ShCw7ucrORNRKCGFhmk4Nn55NmJqiC6BNM");
    izdelaj(nizi, 22, "iYr");
    izdelaj(nizi, 23, "QBJfB7atu6yEMArdc30ljQh");
    izdelaj(nizi, 24, "QBJfB7atu6yEMArdc30ljQh");
    izdelaj(nizi, 25, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 26, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 27, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 28, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 29, "_QAe_ofe4QC7FHd2Nsk2TYfdPnYVwSGaKF7mqJXYS70");
    izdelaj(nizi, 30, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 31, "zurcXgWsH4sQiPbdVAGVgH6dPYrLtcs2S3qIn");
    izdelaj(nizi, 32, "QBJfB7atu6yEMArdc30ljQh");
    izdelaj(nizi, 33, "1QmlMsp2SnFlOqXvilKccYBU_GptIx");
    izdelaj(nizi, 34, "ykdC6aX8YbIeHKc");
    izdelaj(nizi, 35, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 36, "lJ2x0vvSLfg1KWEbDaB1zg1QNj1Pon296gqk4xjLg6p6vcuUABqavoIucuW1D");
    izdelaj(nizi, 37, "UsaSTib0PJZNpcbp3rWW2rz1IeGjHFxDFIk");
    izdelaj(nizi, 38, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 39, "nwH3EqXbE1xuBcj4jjMbqI4zQiDJLuwMbMH_1F6n85w4_znrk9T7me5cCUqOBgPq7sDuPT6aDiezgb_M9JH");
    izdelaj(nizi, 40, "nCWyDoiw7l8htidCB5RTi2nsn97wLO9b4NiZE0oFxYfhPOdWcJFzHhJkVSdsEdTFQVVF3XZOX5tDql");
    izdelaj(nizi, 41, "_QAe_ofe4QC7FHd2Nsk2TYfdPnYVwSGaKF7mqJXYS70");
    izdelaj(nizi, 42, "zurcXgWsH4sQiPbdVAGVgH6dPYrLtcs2S3qIn");
    izdelaj(nizi, 43, "IYXWAIEhtHX");
    izdelaj(nizi, 44, "wj6ap7VjcWUMIR_UeS0kjMSovHV_HUCdBbOuE");
    izdelaj(nizi, 45, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 46, "7eExRkmnpFZT3KonaIIvnSTBmlzJmZpSyQ_wqK4SDsTTRbn");
    izdelaj(nizi, 47, "QBJfB7atu6yEMArdc30ljQh");
    izdelaj(nizi, 48, "hFnRQJdZ7kBgMLylr");
    izdelaj(nizi, 49, "HyDSNPTuqTdUcuRmYEkMjpS7tv");
    izdelaj(nizi, 50, "vLKvOAapDKid5nRSnpPDb1pX1oSvSzflP0pJoKAJvXpDk0Ire0");
    izdelaj(nizi, 51, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 52, "OctPf3imNQPkG5F3nAP7ZC0");
    izdelaj(nizi, 53, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 54, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 55, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 56, "jO36O2hCWntD89oue3I0O7zAuqNRkdpmwybO1dSH4ZdIZfV2p");
    izdelaj(nizi, 57, "_QAe_ofe4QC7FHd2Nsk2TYfdPnYVwSGaKF7mqJXYS70");
    izdelaj(nizi, 58, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 59, "02UwB");
    izdelaj(nizi, 60, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 61, "Lz8qm8Vn8vIKkKXKEgJu2NyKPA2Zvt0v8uJgJEYdp5NKB1DlR1LrTnw17Fsd14ofqw08WPlRIsosEYIMr3SILlpZj7ZDL1PtrG");
    izdelaj(nizi, 62, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 63, "YcgyO9GukjzybxMbbhVK7cR7gmWjAMbbJ_Lk30");
    izdelaj(nizi, 64, "CebRb69v2Sq9ZJocR0mwfvjKozohtfKhGqc_C12");
    izdelaj(nizi, 65, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 66, "iYr");
    izdelaj(nizi, 67, "nEfQLyT");
    izdelaj(nizi, 68, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 69, "_QAe_ofe4QC7FHd2Nsk2TYfdPnYVwSGaKF7mqJXYS70");
    izdelaj(nizi, 70, "g9FkkcpUz3cEFO_mIVaNx9qU8ul_H0fJQ2tKX");
    izdelaj(nizi, 71, "hFnRQJdZ7kBgMLylr");
    izdelaj(nizi, 72, "QBJfB7atu6yEMArdc30ljQh");
    izdelaj(nizi, 73, "g9FkkcpUz3cEFO_mIVaNx9qU8ul_H0fJQ2tKX");
    izdelaj(nizi, 74, "QBJfB7atu6yEMArdc30ljQh");
    izdelaj(nizi, 75, "_QAe_ofe4QC7FHd2Nsk2TYfdPnYVwSGaKF7mqJXYS70");
    izdelaj(nizi, 76, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 77, "iYr");
    izdelaj(nizi, 78, "Efe4JXOgQVjmvMzC6RmZ1yvOjfXZtAmRpl");
    izdelaj(nizi, 79, "YgXQ5kTxoFf0I8UA6duRZQaryI7X5ULd7ARDms4Y1tY4v4o5rnxaUvRQPFfWcyMqHFQX6VhI9WQCqDSUh0TRfvJIrXbFkBh");
    izdelaj(nizi, 80, "7eExRkmnpFZT3KonaIIvnSTBmlzJmZpSyQ_wqK4SDsTTRbn");
    izdelaj(nizi, 81, "g9FkkcpUz3cEFO_mIVaNx9qU8ul_H0fJQ2tKX");
    izdelaj(nizi, 82, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 83, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 84, "vd9nRLNSHfumTzQc");
    izdelaj(nizi, 85, "Qw9SeW4dK5wpen9hxZIeVXkB6aBlfjCwvV9I0FkbddifJ3qn4wlnkbPK");
    izdelaj(nizi, 86, "cF3yyjZc5RjRbAu3DQ_YKZeFDbsPR");
    izdelaj(nizi, 87, "grtiUiBOzCBOxDDavdXgDUZlkzkTEQvy6DvZBxwBJzvbSEsugKmV0kS6ngecNfiiw_iiQ");
    izdelaj(nizi, 88, "nMaCxRv70VjCsJGA6LyJdsgBdHfyLw9rBnL");
    izdelaj(nizi, 89, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 90, "8_afhAlAvJpqB04yEXQ3htw4mBl");
    izdelaj(nizi, 91, "CebRb69v2Sq9ZJocR0mwfvjKozohtfKhGqc_C12");
    izdelaj(nizi, 92, "qMFTIRsmp87I6DedF2OWqwVpQ8x0gboDQZo4iuv8Zai8TG2lWeNMhK6MK1zmXNIBD");
    izdelaj(nizi, 93, "reBYektUXJr0rgQmljCSg0hPUrx4_fN7w458CkvdHiZu3fd1GOYuNDh5SQP27ltaNSGrVriAbm2pQYEAoSaHLDSxs8j");
    izdelaj(nizi, 94, "CebRb69v2Sq9ZJocR0mwfvjKozohtfKhGqc_C12");
    izdelaj(nizi, 95, "3EcjM_eB5aOeZQFtexGAn_hrgqNBSWrRSAv0Gr1oQj425aHvxxm8");
    izdelaj(nizi, 96, "6s2ppJGFTLeJ3L_9r8qGqV5Akwkv3Ji0PHiXNQ3qDmDerv5tm_REGK5L5EeJsPSpvj7bSiI7wyM3lFqVdr2");
    izdelaj(nizi, 97, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 98, "lk_Q9hjkOdzadNaBRixU65h4Rt4EXL4o7QDfX");
    izdelaj(nizi, 99, "nEfQLyT");
    izdelaj(nizi, 100, "kC7PGG27KBULOMG");
    izdelaj(nizi, 101, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 102, "Z5d8gPGZYtB3teSknnVRyIcxQKMtvOTrr4zLfHg1Bp8JZUQwcJYeVHzy5OKG_Hl35miufysbisCZ26mqXGymJ9JC");
    izdelaj(nizi, 103, "gGdv1iagkYM0HiX5FPJ8uPEsQN9w_v9");
    izdelaj(nizi, 104, "yxWICLWUi1T_BuQoj0IQ8Gae_XthrxjbtAN5XcJIX6IYhHhaN");
    izdelaj(nizi, 105, "SMZQ3b7Q7eozGrpLlWfhGnYyZGYFsKe9i9cIT3SkiE");
    izdelaj(nizi, 106, "TwKvHNlNfxcLumG8Z4vZc0LjcL2X_YjGo51nA3VMxK3OSLk8uu");
    izdelaj(nizi, 107, "pPJWTYi2yvWznW");
    izdelaj(nizi, 108, "kC7PGG27KBULOMG");
    izdelaj(nizi, 109, "uX8eMTCWv6nff4SLUvLtAdiuM1x33xEutDS1er");
    izdelaj(nizi, 110, "4_5wzJqEHOQWgDQrd8x6S04_YlCfjQRLe7LZ22ZMvBuYj5rAIPkekNY_84lHGCo2xwBxlaHhLxe6PeWRb9wve");
    izdelaj(nizi, 111, "EEka9Ty1HwjL");
    izdelaj(nizi, 112, "ljk6jY7VgndZaKXhW_djxvFYwdugBq9QdUbtDb06sa2F4TGlR8u4QKQUPj3NLukcrt");
    izdelaj(nizi, 113, "wj6ap7VjcWUMIR_UeS0kjMSovHV_HUCdBbOuE");
    izdelaj(nizi, 114, "XQEXeJujw1P3N9_SULw6x1pbep3XsPR7zmcxvCnZIr");
    izdelaj(nizi, 115, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 116, "jEVD");
    izdelaj(nizi, 117, "6s2ppJGFTLeJ3L_9r8qGqV5Akwkv3Ji0PHiXNQ3qDmDerv5tm_REGK5L5EeJsPSpvj7bSiI7wyM3lFqVdr2");
    izdelaj(nizi, 118, "qyA81q5nvBrMtR0S");
    izdelaj(nizi, 119, "zi9czkk01TegpK34vQs8KqXSbsHylt6ngHa8EubT7TPhHswzMapNWYMDUlRbwQSiBy2BRTcNFi7yDpnGukiYpEvZzlXGZo");
    izdelaj(nizi, 120, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 121, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 122, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 123, "DVRJG6G8UGh_m2Xnux5W_KdbyjqhDczmcihCAgolF8azXobhBxj9_3jmwhDwsR");
    izdelaj(nizi, 124, "Gq1_w8RyW9jDc2k1YQdv9ovbqR8LmE94bUEz1coPQuPrSlDoeSp8RG8exXBebsTHenFkiszR_oN");
    izdelaj(nizi, 125, "wj6ap7VjcWUMIR_UeS0kjMSovHV_HUCdBbOuE");
    izdelaj(nizi, 126, "uX8eMTCWv6nff4SLUvLtAdiuM1x33xEutDS1er");
    izdelaj(nizi, 127, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 128, "Qej5KFuN8mclOWXCg1Tq7Fzm1e_7Q2ZAQa3u81Q5Cue6rsPLGbr4FzjNNkqrfg1TBP9npm3DrPNAkqQzIaz4vdr82Ou");
    izdelaj(nizi, 129, "fBaNEHtqWLyTQqhSAqgl");
    izdelaj(nizi, 130, "GMDdWVw5tB8l5suGPcrkfrHmch90SXSyO1XrVG2zgBOSfX9ACsnjTMfC8fW6jy5uGqT5f");
    izdelaj(nizi, 131, "02UwB");
    izdelaj(nizi, 132, "7nWtgiDz_jDeK2P1HoP9RloD6MteHSYVu2wEi0jB25d5KiRtwMcw3yJ8rvCQyTCyVfQhbonRXMqrz");
    izdelaj(nizi, 133, "grtiUiBOzCBOxDDavdXgDUZlkzkTEQvy6DvZBxwBJzvbSEsugKmV0kS6ngecNfiiw_iiQ");
    izdelaj(nizi, 134, "qMFTIRsmp87I6DedF2OWqwVpQ8x0gboDQZo4iuv8Zai8TG2lWeNMhK6MK1zmXNIBD");
    izdelaj(nizi, 135, "Qw9SeW4dK5wpen9hxZIeVXkB6aBlfjCwvV9I0FkbddifJ3qn4wlnkbPK");
    izdelaj(nizi, 136, "acgdH_3xMOadMmL5UDyYP_Qu");
    izdelaj(nizi, 137, "4jERe8umrM61tto8FZ5rzseUucoHswfwFZGqbsEGzxcscG");
    izdelaj(nizi, 138, "7wAImyyRtXXEKeXD7wRqAEMQRDpilklkZu3jC9OQziczANSNGi5fvG_O6iqLQTfhMNBwWgQTe8");
    izdelaj(nizi, 139, "GMDdWVw5tB8l5suGPcrkfrHmch90SXSyO1XrVG2zgBOSfX9ACsnjTMfC8fW6jy5uGqT5f");
    izdelaj(nizi, 140, "QBJfB7atu6yEMArdc30ljQh");
    izdelaj(nizi, 141, "_5z2p64xy0Y4SXK1z4c1snrhHiM0Xai98x9xD3yJWl7A5w5mf0V0E4D9k6TRD2zhnShht7");
    izdelaj(nizi, 142, "YgXQ5kTxoFf0I8UA6duRZQaryI7X5ULd7ARDms4Y1tY4v4o5rnxaUvRQPFfWcyMqHFQX6VhI9WQCqDSUh0TRfvJIrXbFkBh");
    izdelaj(nizi, 143, "7eExRkmnpFZT3KonaIIvnSTBmlzJmZpSyQ_wqK4SDsTTRbn");
    izdelaj(nizi, 144, "s2h");
    izdelaj(nizi, 145, "kTNHnswJiSjrUo42r");
    izdelaj(nizi, 146, "cd0SHUVggMGf_NWRBL97X3Ge7AGX30smm0p3j4MO6xfHIHpzd5BicFf3DvnjDIfSic68WfPPTVy0eA1V70wZttBrAuoY_OaovUD");

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    racionaliziraj(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nizi[i] == niziKopija[i]) {
            free(nizi[i]);
        }
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
