
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "MCW0I_xww88tCLuI3gqiWUfTCkEbm3oHwH",
    "wVuME60cOxB55UesGhpbZwqICdiMhXdJjr",
    "I2yT_H8mPxB7yT5394jBigIUAgEPAkutQb",
    "VI4TxHzvsCkhnmcyfPPddRNjzAVx7g4jdg",
    "oXRSwk4ElnRORjXJWaVctFZFLisVdYAPxJ",
    "2i5xlq7fi9eT8M6swpm0lsRuw3CSQJPx0l",
    "8tiTnqzU8CAamceXkCnFSpM16ZzEZtTiku",
    "l4oBUkjv3qsKHS34jRqqonDUVcCeXTFi0j",
    "BM0jebm5eCABqgIj8CJvA5g3HvftYO5QKC",
    "iLq9sORQ_HeT99xPdUiZEbY322S84fMtLM",
    "IWND08dWB9nmleLNmEroIEuW3zZQstwNbB",
    "nKNDEC6b2pagSM9LYJNIa92mFQEd0S8TiT",
    "tvTelOnB3cfKhqseyhHftOKh1WLIkyeryd",
    "tzpCpFX_bXfuAzNnXB8vCv97lofN0FyS58",
    "eOHGaxdCpCwyY0z0zJMy3U9uLKtNQuZYQQ",
    "iqS2cW6uGjEraj09p74zQ1QtU7Yd0Rd9kd",
    "OHXH2LJEnsfrzXSM_2kZsFbDooiDRKsp7Z",
    "oJrer0odK0uChkuD23lr3YbxmNzQa82Plg",
    "o3wf0WPB_2DGFyiNfwWRn6UAWbKuZkgUV5",
    "jKZJCDJ9zHaq1Jg2dWZdCx40EkXFoD_MBW",
    "Euc3M4OnorenlGNOnxS_1iffgNlzcqeV3E",
    "PKtC8B4fHGYLUQPUaYTrkjo11ejzAY3JXe",
    "nxbkU6lpF_ilibvtQBYOtjvp3VDimDPbU_",
    "w9SZl2ukXuVCwme1_AoFFaN5bpLzl1o0mQ",
    "xMTWx3uWWvEvzlvjHtDywLNuzSdcfCXXsr",
    "Vg1axYGk2IIrgk4o7RyGyQROETXL511Ayu",
    "LGCeiikNusTNQrbsmM6Nz5wX4n3wYmXN04",
    "5PIpwPGy6EwW5Sj6wjr0DvdmAlweKEpkPN",
    "E9KFZk0Gq5RRU7R6tDcboFSkUzDqykWLqs",
    "07z6y7ifKzguGCPpUL43les9xEfnNUuVca",
    "g56akBzKUtRyUgIK8DlbOr94dpTI7dIq0A",
    "q7oa4gztd7Q4m6Bqot8mgPKYnax1af0rfP",
    "4XeJB1E6ZMTIygq8wvmEQUwC5HTj1Yot9z",
    "KsFJ4nmndG9U1qBZmvPeoOeenj6Nn8VQ0M",
    "qiDJsQgOgR4H0yCW9yHNpxuBcGv2wI1dJw",
    "pO0ji4heNPBnszLq8WJAKWKMcu4RWRwSoL",
    "dD33sLunxksao8SNjd4Cyd7L2VgRL0bvvG",
    "SdFngDdP7_IYTU0F5Ut7HQt0_0OEjvRZ7Q",
    "jsEACk_Rc_YsgeLbxpo2PQzTrYbsiR7eq3",
    "Tga61WFZKZ9GF0TYrXGBLMODbChUNAzn5N",
    "DxpDMzcJxkXec9qwGVngWXXMeSRMvPBzDv",
    "FNW1DxMgcmcrHtPMGuGvCThOpUlcHnbs2J",
    "Th6gjfhTgukwVeJhgMmCXDT5hFCseuYQst",
    "NHEQiF0AFRc8E3utbErhhde_rpbCvK3ZAl",
    "ZuuGTnJ9mOrtaxqGh6Q6bdvGvMYU8WWYJF",
    "V7nOERM1MP3aEs1hrYgdrV1FWinaaNFG5O",
    "HhvgUrrZrxDs6e8ozvjCMsBNYexBf3EmY7",
    "3UVhd44fMMaJn9sfUg4SRdWnfsogm7myAG",
    "53QGYAUz9ZTjpbaSLx41Sw9XS6t0DaiFWu",
    "HA6npebN_WTbZN8fFOonyJT0oZlg8VcUae",
    "3wt1MaomezK5CJtPUuDJ1OJn8AcjzBTKT9",
    "GcbHrfW1f1_V6dkj5SXJb8Mls_JfWskqix",
    "SE9xoLnhN9CzYe09FF0MGinS_3aVMbrEbm",
    "BE4AaQIZa4i48EYb1HWuua6SySZ8byHr4w",
    "K7Mqunv9Lb9qcUlAYZuaTcJz_0r_vrc8Ar",
    "wsHZJyT_HCvwD0OF73rmVGgzX7qXcPEEWH",
    "vSSmX8brTNb6tRSgdyTwBuVSgNYa4D817R",
    "2_G6__ZSpi7xclM3tyCnSMsHIxAlf9PG9N",
    "xP5Q9r_fXUQhqz0drCEyndUn1_mclVG1AC",
    "je_DOx3fZVk915oyflSJx9nh56zAwjldPp",
    "1bpUmfXVHu7ZaNEpZ2aOxKkQDAlg1AQrrW",
    "qH2qXm6LNNnqw9JYTsQTleYSSpm2Y3j0zF",
    "3tleH941W3wBmX5mP1H13YLaXm_jT025_a",
    "8I9dsJO7GWvgLuOGFiuNs_WmKF6VLY8AtR",
    "8a9sXc26Cvd86bwhQc9e036jGEEw33UqQM",
    "__7ALNi_vnnadUqe1VnsLAHuW9oZ4DZ7cd",
    "YGHxLspaw8myU32ZjmQNp2VnoAoBiH0Nex",
    "cICtI8Mgm3XtXtUTZXqNePVq8OlecnnSWn",
    "hthLSUIEfbi4mwMRub5JVCnTw9LfW5eU1f",
    "cW0ra3EvPwAQ0Y8AhncnXEw_HpBGQBD85c",
    "gmichEHTRvtHdSjMc71wWTHR9_jGWSE20c",
    "6OGRmGtyid_RVwdGXxr18G2HcQiJU73HrS",
    "HiooDYSXwPIu8vr34kvQiqhgpI1A3C6JOw",
    "YzUP9v_nwecKz1ZhYEfrY5lelYLCtrUifq",
    "mq0bdmW6T0qdfl_gRxoQuV99i0HoCWPUp1",
    "BTxrsG0AZfGKqXs4Sw0_RWnHItomweVl3h",
    "CQISaGwWdrI5_rrOp5LWYlP_AzCuXoyc2G",
    "r2hAfHaL02DtSO4ImNRWES84sjyUJceqzM",
    "PuA5kWbEzz51pOPOvluDlRr0ir8TWhSCAo",
    "YKxKvAj7xpuhnn5OGgPfNvYLwUpqlsMF8j",
    "YK_lrAIwa6AuqUmsqfzXLiuR8aGRpLUCDL",
    "HkxEnO1uM1ef1tk9jdFAKSzVEjYCzlxcR1",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 34);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
