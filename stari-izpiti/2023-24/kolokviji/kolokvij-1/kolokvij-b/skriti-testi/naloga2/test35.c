
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "kjjANjxfc57mTcNSj_wRY1ICPur9QbK7bADix5oSeqCtr7KQB9AiwqSZWFROLZqyPwPJ5dpA9vXffA4uW9ztbd",
    "vEEh_eDlMRDL4iumt547BSwa02tF6xSq0lRbKpXRifLBDbwYbOgc8ScDUnY8ZQkkGk9E51w",
    "CvApTUxREwGuKrshr3X3q",
    "bhS",
    "7fAevCm8VDR8fJGeiGnpSKyfjST1bvdA5v84",
    "qurFi6CYPAYY3gXjO64FxS6OxNU",
    "nmtfwkZIYoou_4bhKvSza79EhTiRFp",
    "84wgCvdLywJ43tOGYiOCB_1b4BPSYSpqyGD_UGBnvumU8e3H8Y",
    "oPBFYBQ9VuZ0iqtqOBbkNlJDrEMetIYouSfeFcO_y17U9iAJqAMnyBlaj4nms7pGGTBQE7ldRRmoWWDh",
    "YLHkWfRLRmz3FnYYhkaulsDXa1M_urcOPdaUESIqppJTjeakYj5NfTkWr0GfdweW4",
    "2sZfUcgIMQ6ecdvVQtR3SrxkfZEqtNVhU3mS4jihJlpeeAdjoCMjGwjtkSfhei547Y",
    "JcACBxBCDVcn2ua70TQ2UDBrsnwCTwPWpQnDlPmTzWKNd",
    "E1MhMwEdtEDbN166qF1waz9wyDUWUGRNlp6tLHkWirBVUW4nMFuRbm2qAniScUzNfSLl",
    "8ZVRAMdqvo",
    "WCO7foFFm78YrNZkOuMHjf5UZZFUN7WBl5glCr27vRPw_Vo4b9t0Evxt4xXuP13rlNVecp43xn5erHar5tvvb7W6qJja0ScbB",
    "k0cadfZwUe",
    "FN9kiDTp76urF9Sc1KKNKPLr_GhtMFVnOL2g6gbh7y5c",
    "jyDMrorHNya71kw2TiTBZSkDDJpfgxRaig",
    "zHrGjCyyGj5OESixjV7s",
    "so44LpCC11w4HoDgprMJZljVnNJp27p3kGMqaiRqv57MOnr",
    "DXM6vsEvup43Yp60izay4LMMqb92rgVoiCYY9xFGYHaX9nkazrcijnjuTjW_woHDOCxY",
    "wbFUkYKXsMrPstWHc3Uik5hZs8L9Xcc7mXMLu3ax8WTI",
    "DJ8rWlp58DyvwNQi9IjDEGPR79tca4Qorj_gJx3O4ysqyXIakRMQPlmaND4HGPV5KVRSnixulVCKkZ3EPipfXqovK8O",
    "ZIp_04Hb9yJJmhY0RfQK8Qt6CZqmkSpX56",
    "MfWKBmk3eGztrpSwOyntojHxlS_izHWUOlMfmusN9jhLkS4FzdSNGsTXEjrO1WFBF50VQBrVQR9fBDJDI",
    "1ENugpJyaB_mdFhsfSNn5xQJYhBGMOVGgnDZ",
    "DyI7c4y3C6TAp0cDD8iG2X8t3pL4t2RPqUhiy",
    "YZIy_OJ_1qPei",
    "lNgUhB6H8v1goTw0nmgAPownx1FnPe8LdJABxxTeiAovodU4mUTSdoiVCnCXyp0iAIFvWoOTCSdXLESlG",
    "x2xhQe4wBb2HFn7G46x3xekThogvvmZNSWbUzv32A_6_TZQaPClq3WVU68aNJ9Yp8LGfhwcqs",
    "gbB_X065s2cUISnxY91O6IEwMsFNx5DiFwZI",
    "ciKdmK5BgAq0AOJYtxtQKgbXoccAeNcYl5I1eMMxpW4xQDxjiAqvB84zQWui6ap8YCPXYZ",
    "M18lUeLdyBiNcRbRWxUFltH5vdQ61iUX9s9XJfwhkCfQSwJTJtsoRAyjURxk34hpTXm2x",
    "NEdeqOc24tZOXuGWVYjc9dGe0G1bVUCdJQvFmISq9pWeF3No4nY3zOWHYs",
    "aWsqs4IFnzJy5XseDkmtFUSRgZ48dkubMY6bvrPgbX4NUlDq8trZ_93hYUryC3Sof",
    "di9TEsS0EEVW12K3bjUXkjSTsNjhf1EMM_NqXwMmIg65DCFZiVQIxkMtJOCBK6Jaz_1OfFupT_FMLms6JADN",
    "8e5lfMsQJ1WomppDsjDgdx86jHPM8eH9B65CNgsWKx5VuCO6O3gtVe9Y",
    "Ts33eO1SY6TG4PzZv10GLAf1B1BrvG5Ybefovs2KebgKjBShGSNHs",
    "Yf8TnzKrbLuUFcVPyrPrivFtf_UUhnMRZIacb4zdmRPfVVbRVe0GoJ",
    "mWTW1wh_jjmcjgZUVKWV9s1oB5D0_CGbu",
    "2lcfhGWrWvclej9bnAtlrPLwaiHzAeMYgeAKs1u7Qs",
    "OzaJwhpa9WarDx2zlB8pqbK",
    "iRiX96mKqJykl9tCnwlmB4tXojmuPSlbefS4_ZR20JGzWax0KwVAofJF",
    "ub6neT7cnnNh3YFxcp6FyVJYhtJCgjVf8f8cMFBhEKa2YRtYP6x7uwcHb6OofVDE3c_mmZWDnHg9tsMKP8JED7jvJkr4ky",
    "IMHMIS0lkvynBaiAbOI_VENqfkIb5YA5rm",
    "fAp_AcR4izmbAEWePHOs",
    "4obLhQGjgqiLbqjstwy1pzUgbLEK0nOlgdhfczoQ4uBmqw3_lkdQY4MHuZi",
    "1_YGHn4qq7fYk6_9dPRvfXU2LD6Cq",
    "dSg2sAAZy7hwd_124Ipey_g7eA_kH",
    "NUkWVBxzQQA8zuQHw9T6DRmPX8Hc",
    "i64EtXT7WJD5KJNz9TzB3e_",
    "NfXwG0vFoywE8DKmU0ub43w2pcly85jgPvu2V2NSU_xB3pxVyijRN5QaxmbOPmq65AsL_5loRKw78xJcSOkpsMa2nNY",
    "oNp3kiiknpCCAInUziCsnKMOAnueTkrLFyesQuX_9UU8JNtQJUaCibj8sJ_6ve50VyoqxP4TT_9BHKJ28Vzz3oBdvwiA1iKCmyR",
    "zo_TcOW6FF9jMxbY_b714rSaJKSFBcTOcR8dpnV0_aLEu_Cf0phXNoE1BiNByXrwOOiJdTH",
    "PmWp",
    "sw4DWfht2",
    "AB6WkbKwqbL_1r4xOxhQwM4X",
    "CyhTNicIMofMnH2fP",
    "N1qQ7kPOHqNgSLVqJktsQXxfu1fYn5l8ohhU108oAWqmJSYV7dm6k8DEGc0wlMVonNmzGw7n3NBWWB8L0TlaOC",
    "MZYFN0IwZ5xxyhAsDaOfuVA",
    "FGFTKReKEK8TGBRAMj6LvwHqBRRNGs1SS30rDY7IT2Dlm2ma0VLOMLBjj0AO4xBdGL1dy_2bxtcpK2AiRawBIWAM",
    "z9EiH9SHpj3rw0alEgeS7e5eK1bKEm_loxbCPVQ0cjtJr1w8G8",
    "guXaQxckCj3eFV7K7yENYXQfvQ4ptHeNbqlSn4p8G29AkhKKyiBtN6f0DEu_SbJXKrTDSSnelIV",
    "R0uDVJsbUChRgCPcIg283w4h7nUWVuo0ppy87iq6kes13CVP36QSyOMuhOvFrjwKE6YgyyI18krPcwVeb9FP9pLdH",
    "pyrN",
    "yLf7efc1MjU23DfSZp3QPiKnW9OjpLmJbguYY9Io04r8k3N7VG2Lx0k_DBs",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 667);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
