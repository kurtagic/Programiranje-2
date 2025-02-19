
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
    int n = 132;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "h");
    izdelaj(nizi, 1, "h");
    izdelaj(nizi, 2, "T8myNosrpUIPSbZ0n1iZTuYuH4ry5xAKnYZky5QycnIMnbf2");
    izdelaj(nizi, 3, "F_Sw6ffbo7jtL_WbTOHsT_bY_Hp9GFHPELMKlZkaFriPR3EB3wzzIkFugZnGeLYqanahrozxk");
    izdelaj(nizi, 4, "IcmX9tCOlpvzHX4FNQhXlFviI8e8aVFBbIv_5SF3qs4b4964Xfkh");
    izdelaj(nizi, 5, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 6, "bdWgEh9QJ4zZoymiDvxGWD7boTJnC_om7twPj8d9eBrsgmBSilRAxaPBFbds7NE");
    izdelaj(nizi, 7, "7A6G0uGOUnEBOJWFaXPbqiIeAPcBv1dhDiOFfrWSp8eyflWy2wjlKc0abu77QTNQkhjxc8jVHmU6l05gVQLPlGLNR290Sy");
    izdelaj(nizi, 8, "JCPOFJycFQUwbeVyip91OAWDkbJybRcljd0SAw5SRNbIC4ZsuUTtzkjbDm51lYbqqvequDE3uM");
    izdelaj(nizi, 9, "X23Uz2N81bge9RfT9nlOht8qnJaki8PwZOIEUHVCCi11nLsM74Zz8pzSDOFRxAhCWYhE0lxIGRtbqU1z7lz");
    izdelaj(nizi, 10, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 11, "h");
    izdelaj(nizi, 12, "uPCxq779DfByvTC8OqqfjDglkVDMnip0NgaR_RJGbSmF8n_90C9ScSLTbMLfZrWA_oJhGm1ewIz44oeRe4wtglV");
    izdelaj(nizi, 13, "70gc1VsBcbGoVAMovpVqbp7cgPjcak43A9otJ");
    izdelaj(nizi, 14, "VtwmDc08BORJ5EPyZOfiTgFidSCiBsEHzZYUTgKYYT5ZUVgo4_lluSCr8ABiHRtnun");
    izdelaj(nizi, 15, "eCyp7prY");
    izdelaj(nizi, 16, "tY_XPDtfFqiVyE7el4mD_HQa1tAwT9w48uZhDHsq3l6DDymxCEy48I3ET96IP0J4Xn_sDgBZYjNkRMowMbz8l2L5d6sq");
    izdelaj(nizi, 17, "bLVy6ELqRC_bRKV1JYPEvEG");
    izdelaj(nizi, 18, "tMKXo0wrR1gakt2RkUE7lWZv22fUxv8ngbLJFhK5152aUqhR5kJkDRoRPCdRyswYe9mWfoajTtWjOmXvu");
    izdelaj(nizi, 19, "e8ZD6L3qLmCmNRJ8LNJXf6FyowMelYXzYdJvqlGEsvqS82qB6z1M0rNSZslz6G1a");
    izdelaj(nizi, 20, "hyxak6yJDW9a5L3bVashgeBTHyjOhCxOkgmFIQ0RiKFt4CojPzuELJQpcg");
    izdelaj(nizi, 21, "TmYfOL7nEUa3Ox");
    izdelaj(nizi, 22, "T");
    izdelaj(nizi, 23, "X23Uz2N81bge9RfT9nlOht8qnJaki8PwZOIEUHVCCi11nLsM74Zz8pzSDOFRxAhCWYhE0lxIGRtbqU1z7lz");
    izdelaj(nizi, 24, "h");
    izdelaj(nizi, 25, "eymY_cMBo1L");
    izdelaj(nizi, 26, "eymY_cMBo1L");
    izdelaj(nizi, 27, "eymY_cMBo1L");
    izdelaj(nizi, 28, "vMd51XGS7v5AJpbnm8Bd5RKGCohPM1if988wdwcgUD1zsFJSW53fTLIGUltAjdGX7veSjO1Ewil_epUlI");
    izdelaj(nizi, 29, "JyW1Ju48PmpJKcvQQEMalzLQcbvJVkL3xeHJgNsjSmtKCoaXbeLr2HvltH");
    izdelaj(nizi, 30, "TmYfOL7nEUa3Ox");
    izdelaj(nizi, 31, "X23Uz2N81bge9RfT9nlOht8qnJaki8PwZOIEUHVCCi11nLsM74Zz8pzSDOFRxAhCWYhE0lxIGRtbqU1z7lz");
    izdelaj(nizi, 32, "ldGGgZ7ek9WRgX4O6N9dCuc4mRDwz_o1mwDTGLp73EASxxuNfLT7N38r1QmLiSzcUhpUwR2");
    izdelaj(nizi, 33, "tMKXo0wrR1gakt2RkUE7lWZv22fUxv8ngbLJFhK5152aUqhR5kJkDRoRPCdRyswYe9mWfoajTtWjOmXvu");
    izdelaj(nizi, 34, "X23Uz2N81bge9RfT9nlOht8qnJaki8PwZOIEUHVCCi11nLsM74Zz8pzSDOFRxAhCWYhE0lxIGRtbqU1z7lz");
    izdelaj(nizi, 35, "h");
    izdelaj(nizi, 36, "AkBSvwHTjL2yiqzOBdH18CvTAn8DQF20F5YRdc43Dcyw6LfOmqNjrtltswriaMXp9_lWHfQXai4ulF8aAwPBIHY0ruTvio");
    izdelaj(nizi, 37, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 38, "8w5ZmaP1FouzTFd");
    izdelaj(nizi, 39, "eymY_cMBo1L");
    izdelaj(nizi, 40, "ZQZTUK8TqBz4aUwN6axWdmmzinyY8FjqAX_qXr0GLaZEwvXKdlkaPYuIoGEOkLiY5Zutg5d9CN50CcGpI");
    izdelaj(nizi, 41, "yNy_JucN74fEherTfaszv4mqhVuCOur027HnI");
    izdelaj(nizi, 42, "Q2KIzOLP8_4ZexWq08j2g3KoV5ylowwgYgDtLIg92sRnYI6AWeFm3dQ8vOKX9D1vcbySlxy");
    izdelaj(nizi, 43, "h");
    izdelaj(nizi, 44, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 45, "CAHiaJ4TuRsCHXVnPSkeOS9rpxhC050CN1W_IZ5Rfpzx1jLOLASSN_Mto_34");
    izdelaj(nizi, 46, "TmYfOL7nEUa3Ox");
    izdelaj(nizi, 47, "7l_RiA8JdZIa88VYJvx85FV9s0_FCXR9smZNeQjYMhcFBVfxtBeA9G88mVHMEtUMj5sjO6fB3UEnANzhWPkX4PAEW6q");
    izdelaj(nizi, 48, "ZQZTUK8TqBz4aUwN6axWdmmzinyY8FjqAX_qXr0GLaZEwvXKdlkaPYuIoGEOkLiY5Zutg5d9CN50CcGpI");
    izdelaj(nizi, 49, "7A6G0uGOUnEBOJWFaXPbqiIeAPcBv1dhDiOFfrWSp8eyflWy2wjlKc0abu77QTNQkhjxc8jVHmU6l05gVQLPlGLNR290Sy");
    izdelaj(nizi, 50, "ilCR613zE");
    izdelaj(nizi, 51, "X23Uz2N81bge9RfT9nlOht8qnJaki8PwZOIEUHVCCi11nLsM74Zz8pzSDOFRxAhCWYhE0lxIGRtbqU1z7lz");
    izdelaj(nizi, 52, "DCU0qq_oVBWFQcvv");
    izdelaj(nizi, 53, "7A6G0uGOUnEBOJWFaXPbqiIeAPcBv1dhDiOFfrWSp8eyflWy2wjlKc0abu77QTNQkhjxc8jVHmU6l05gVQLPlGLNR290Sy");
    izdelaj(nizi, 54, "OXdchKfnEVFxDh_4zzqHLw39ErRYdJuKun9CW69");
    izdelaj(nizi, 55, "p7YjD42it1qyWPq_Gfi0Trc3BHmXfAp5yKt0u_INrKh8lYs3i7_m_l69GLcpTaa");
    izdelaj(nizi, 56, "TAzeKgQPCbp0fVBV7ti61zBgGZdTgU2_q6QAEaVEWXq6IOAjOSwGroHlyIFMg23l_2BjoRMdpKrn");
    izdelaj(nizi, 57, "wxCD7lRN20");
    izdelaj(nizi, 58, "X23Uz2N81bge9RfT9nlOht8qnJaki8PwZOIEUHVCCi11nLsM74Zz8pzSDOFRxAhCWYhE0lxIGRtbqU1z7lz");
    izdelaj(nizi, 59, "ZQZTUK8TqBz4aUwN6axWdmmzinyY8FjqAX_qXr0GLaZEwvXKdlkaPYuIoGEOkLiY5Zutg5d9CN50CcGpI");
    izdelaj(nizi, 60, "e5iPYZERdSm_mUO6bAc9negwPzUM22o4GYEh6WeRR2lFQMQJahhjZxraR2Bod4");
    izdelaj(nizi, 61, "7l_RiA8JdZIa88VYJvx85FV9s0_FCXR9smZNeQjYMhcFBVfxtBeA9G88mVHMEtUMj5sjO6fB3UEnANzhWPkX4PAEW6q");
    izdelaj(nizi, 62, "GcnytSRU0IEt86hRsNbbyv841kqRbo6PrWhCq_gASYPuj");
    izdelaj(nizi, 63, "I8RGKN8lBPlymWMQdHBAT0mj2cZCM7jeah1e7sm6QNOuvp4ZKd0cKgqPrqr_UBbtdXNCez5mNf77eRhxB");
    izdelaj(nizi, 64, "Gy6VIwK5NQJdudPAdb8Rdmrzh9Ib_1aCsE69KAdKnXEs5qZrFkXyiOEID");
    izdelaj(nizi, 65, "hyxak6yJDW9a5L3bVashgeBTHyjOhCxOkgmFIQ0RiKFt4CojPzuELJQpcg");
    izdelaj(nizi, 66, "SHVG495LThfibJjZrHAdMWoJD_lxOHhRTFyaQyaEcvNbLNorhCAlNrVq53WGgKdWcQZ0yZPJLCg7WQ9q6CnjJk");
    izdelaj(nizi, 67, "TmYfOL7nEUa3Ox");
    izdelaj(nizi, 68, "iN1M1zA1rVLNlpYIGk09fg3h0yMDLJd16thSYoamcev_WKoK1endUQNGw");
    izdelaj(nizi, 69, "Q2KIzOLP8_4ZexWq08j2g3KoV5ylowwgYgDtLIg92sRnYI6AWeFm3dQ8vOKX9D1vcbySlxy");
    izdelaj(nizi, 70, "7l_RiA8JdZIa88VYJvx85FV9s0_FCXR9smZNeQjYMhcFBVfxtBeA9G88mVHMEtUMj5sjO6fB3UEnANzhWPkX4PAEW6q");
    izdelaj(nizi, 71, "K_TKNPC7zv3FMD36BZqiPTzf1omeIo1zkCHzZOuYqtxdEgG_Tut");
    izdelaj(nizi, 72, "3m5DjURe8KtVyZ3D6yBLItvLbjmfutS2RJD2ICHdb4owB6sD_maxB0jbSgI");
    izdelaj(nizi, 73, "SHVG495LThfibJjZrHAdMWoJD_lxOHhRTFyaQyaEcvNbLNorhCAlNrVq53WGgKdWcQZ0yZPJLCg7WQ9q6CnjJk");
    izdelaj(nizi, 74, "TmYfOL7nEUa3Ox");
    izdelaj(nizi, 75, "iLiKG2xcU9GTRvOINrYfZzm4jcG86UigWN");
    izdelaj(nizi, 76, "4j8");
    izdelaj(nizi, 77, "mrZFkbyJla");
    izdelaj(nizi, 78, "ReDv6txLRN4yBffjHIHJN3kjJRJHj5Qte269f24K51ptzEspuM8zFD28SBStyiCRnkLAA");
    izdelaj(nizi, 79, "ZQZTUK8TqBz4aUwN6axWdmmzinyY8FjqAX_qXr0GLaZEwvXKdlkaPYuIoGEOkLiY5Zutg5d9CN50CcGpI");
    izdelaj(nizi, 80, "3UdtAR0O8Jug");
    izdelaj(nizi, 81, "WteF");
    izdelaj(nizi, 82, "X23Uz2N81bge9RfT9nlOht8qnJaki8PwZOIEUHVCCi11nLsM74Zz8pzSDOFRxAhCWYhE0lxIGRtbqU1z7lz");
    izdelaj(nizi, 83, "RNIigG");
    izdelaj(nizi, 84, "TmYfOL7nEUa3Ox");
    izdelaj(nizi, 85, "GwrN6ewM3zReaxP2u_EBwjmMuiaIIOiz1SdPDvffbrp0tvTYwXT7E5U7pQU7kUITGkDdG1rS");
    izdelaj(nizi, 86, "3m5DjURe8KtVyZ3D6yBLItvLbjmfutS2RJD2ICHdb4owB6sD_maxB0jbSgI");
    izdelaj(nizi, 87, "X23Uz2N81bge9RfT9nlOht8qnJaki8PwZOIEUHVCCi11nLsM74Zz8pzSDOFRxAhCWYhE0lxIGRtbqU1z7lz");
    izdelaj(nizi, 88, "dNVi60wnplpcSk7A4L6jGMQHX_KI_rxPKSToBrGR1p");
    izdelaj(nizi, 89, "TxLuRd7s2JB0k5ZDmMUnvpzM6dP2WD7PEq1CAdjX_tEZRvYNLo");
    izdelaj(nizi, 90, "1rw2TepRjRS1Jh8NlDghKXuSppkHEqDeUSTehqjvRoeghWr8SivgTiYrnhCIvxC");
    izdelaj(nizi, 91, "OTQ9pecgrtm4kxXPnpDI34B6lIYAqZUMpefu001lwsjWORhUfy");
    izdelaj(nizi, 92, "hyxak6yJDW9a5L3bVashgeBTHyjOhCxOkgmFIQ0RiKFt4CojPzuELJQpcg");
    izdelaj(nizi, 93, "S00mb2WeNN5SBrwpBhGiPnR0X4X4GHiAnYzcC9XAmLBWJCC0e0zzo6D67CfoV69eHsvkrOSiSssxznw8Jt9hIJwTB0uht");
    izdelaj(nizi, 94, "d4mPsybPHP3910O0WCo0NE682B4rOLd8YfDxZJLRhKy0F4oJyt3bBFAohzhq_OUehoOaxKphAqEvt06z74Gh5zUjyoDkXH7Bls");
    izdelaj(nizi, 95, "TmYfOL7nEUa3Ox");
    izdelaj(nizi, 96, "GwrN6ewM3zReaxP2u_EBwjmMuiaIIOiz1SdPDvffbrp0tvTYwXT7E5U7pQU7kUITGkDdG1rS");
    izdelaj(nizi, 97, "2uVxSCAC9shtZj7cWFyQGIh0ZXQ2Dyi6aIEzjZulUSsEDKU7A4fCLq6joC8DbDIAayeRaGMnRrrvpITqA59G_hRIfI3Dxn");
    izdelaj(nizi, 98, "ZQZTUK8TqBz4aUwN6axWdmmzinyY8FjqAX_qXr0GLaZEwvXKdlkaPYuIoGEOkLiY5Zutg5d9CN50CcGpI");
    izdelaj(nizi, 99, "X23Uz2N81bge9RfT9nlOht8qnJaki8PwZOIEUHVCCi11nLsM74Zz8pzSDOFRxAhCWYhE0lxIGRtbqU1z7lz");
    izdelaj(nizi, 100, "X23Uz2N81bge9RfT9nlOht8qnJaki8PwZOIEUHVCCi11nLsM74Zz8pzSDOFRxAhCWYhE0lxIGRtbqU1z7lz");
    izdelaj(nizi, 101, "TmYfOL7nEUa3Ox");
    izdelaj(nizi, 102, "h");
    izdelaj(nizi, 103, "v7NgoWcNZ8RWbo6gghTogc8ZSzw_GCnDjRHZva_06dDk8A8HZvpRpuAPlkvgO2i5Kutf2eJr01lsE3nFhiejBlQ");
    izdelaj(nizi, 104, "vMd51XGS7v5AJpbnm8Bd5RKGCohPM1if988wdwcgUD1zsFJSW53fTLIGUltAjdGX7veSjO1Ewil_epUlI");
    izdelaj(nizi, 105, "vrMz4lAzQvz2jQnM");
    izdelaj(nizi, 106, "Gy6VIwK5NQJdudPAdb8Rdmrzh9Ib_1aCsE69KAdKnXEs5qZrFkXyiOEID");
    izdelaj(nizi, 107, "XQ58f9kVZamnYZP0KC");
    izdelaj(nizi, 108, "AqqbEDVTNMysSkZZfDfepRccvNb");
    izdelaj(nizi, 109, "eymY_cMBo1L");
    izdelaj(nizi, 110, "RXPrqtHpbnWO2gsHxrXuEzh7D4zBoPL_bYSE1PJQc71unzlH2YMxlkWkNZhgEeYlpygzTYKNRUIzMhjxq");
    izdelaj(nizi, 111, "eymY_cMBo1L");
    izdelaj(nizi, 112, "ddRpmrihevihdr_k9qk16mMokGKBR9rbqvmy0GvWa");
    izdelaj(nizi, 113, "JCPOFJycFQUwbeVyip91OAWDkbJybRcljd0SAw5SRNbIC4ZsuUTtzkjbDm51lYbqqvequDE3uM");
    izdelaj(nizi, 114, "Os4gnfskyNLAVnuxffOc88VzNi0HLDSzHDIIoxUAmeNYhbFVkD_f8udfoqXFJO0qMuHiQR8HRA9miRS3E1s2oyxLFyaOrmJ");
    izdelaj(nizi, 115, "8dk0q86Mc9AsklL55GDPYqbUT63uS0qB4q8kTpA1_02KbaVW");
    izdelaj(nizi, 116, "SHVG495LThfibJjZrHAdMWoJD_lxOHhRTFyaQyaEcvNbLNorhCAlNrVq53WGgKdWcQZ0yZPJLCg7WQ9q6CnjJk");
    izdelaj(nizi, 117, "Gy6VIwK5NQJdudPAdb8Rdmrzh9Ib_1aCsE69KAdKnXEs5qZrFkXyiOEID");
    izdelaj(nizi, 118, "PpcZhlP7HojBontugaS53Aw_r_k7ADf1DdNEON5OqpEV51s2qcUx8dmQV");
    izdelaj(nizi, 119, "UqM_9tR4y5XFwaK2uFn2hXxEyLsEoFYMPfQPh3sSDnh9ISdgD9VIpPM1k4elGWEaNbOnO0_Kvl4i_3Sp589Mq9UYXe5RJ");
    izdelaj(nizi, 120, "rGyDrSwdfH3It4N8UhtuqNH4UWO871CDIyZ309A1o7s_d");
    izdelaj(nizi, 121, "rT8q91JauORIl4hL485LEgP2lCwvjHCufa3E66_FagUl2E2wK8TdNFm14gAvwr7V20CpBuplX33F4VkJc7XcvYi");
    izdelaj(nizi, 122, "a7jNSwwgwsSjCHbPMGg5UM7kvaLHYwMDrbmEFJ8JrGilDMEamTKzS31ooU_4AYtbnqbce6VXr2ZRJ");
    izdelaj(nizi, 123, "p7YjD42it1qyWPq_Gfi0Trc3BHmXfAp5yKt0u_INrKh8lYs3i7_m_l69GLcpTaa");
    izdelaj(nizi, 124, "Gy6VIwK5NQJdudPAdb8Rdmrzh9Ib_1aCsE69KAdKnXEs5qZrFkXyiOEID");
    izdelaj(nizi, 125, "zEFkPH9F5mIp8pPIKlCE6Pau9E0k7UYZLa0GvR7sIiv3LmvXEzfGKFC8ZLCmVONmGPL6OMITd");
    izdelaj(nizi, 126, "91dsUjZqTiZhHMHPzVLr2ZjC1dcP1eXD7QXil2cLngMk5uK");
    izdelaj(nizi, 127, "eymY_cMBo1L");
    izdelaj(nizi, 128, "XsWlNstBJca1MBY6iX4ffGrhbNYuW5W0a0WII1Kujq");
    izdelaj(nizi, 129, "5JTclGqBw34ITUiPZuwjqf430H40nPPLWr0CGaB4RhMDrouYzBjNiatqbLrfrMPmzkh0gnFD_ClOcXmtU");
    izdelaj(nizi, 130, "3bIn8JQ3UipXXjBLzbrkELKcDAKKf_0S4");
    izdelaj(nizi, 131, "O9n1rcyWV22IVNT0VbKFZjppUImxZNi9AqWBMentersFdbs6MHPPsWgtLUnEFwJHSF2I2wY8e");

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
