
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "3LqBmE4RKk27ncf27OSz5BDushkHqaPx5WfgW_gBCq7z53jFJ_pL7PrQHQpXKhy0Ll1nWoVuKn2qybWMqYV4",
    "vzH2zkHajG9TdcA5RpLOCFqbW4jnPOBUineuwxcWjQEspgO9JgSPbh",
    "FxhmPFFl09LtQvrU5djmy6q2wTdV7eMYUZAUI6zM0Ayfubh4c8WuUnriVdEwe8PRkeFbtg9odmgu4TNe2N1BeeBT",
    "XF4fwg_jJom5NqQvuUO7II2O4eNfjNH79D5TghmL88627tlrSj9HfQUFt",
    "9GYuNTLNmQY3vFWxAFqNSil",
    "Mc2RgPSjfjr5kK0HpKSOI4dlddN4eWRBKZW5VbV6gTB9OT9xdxKwPt9cXDTErbKclA4Mz04ewTwS4FLzyFSzKCNfxFqA",
    "4excdFxs_AmYsu5bgvNfA8CIFIEHrPmjb5fyno65nofwhu",
    "cYVz3lm6oZxDYgifG_DPhzYbOGUzSCZepkCMBRgQL9s0nx6Gw1fdTJYU5WBji_w6iN",
    "IOLQAUaapg_ZS3hKdAcdbVmI4pEt7ksBSz0kTn9ju09RvFaGTsm7IHD4dz1yIfqThVT2Y",
    "tIo2w0bRPCOgPmoSZ",
    "irLWyHG7HkotDGmhrQP9YwsjfQj9gGeljptpBaGx8IoQQe",
    "Sjj0Tt0yfNsKH",
    "1UdDz4V36sraMSGpE8NJ7adSk5x0CQxkn9F8Q8U9kZFZL_BklJWqvaVvQTrmD3XTWJIF_VgCXaP8O",
    "NCcPI42mWlUdCPi6LJ9GZy3ubds",
    "JMiP6Uenj72vmK71VURl2TGLQY9J5LCi55lsPofjhijVkVuu8KuqDcHUCzv6BYusG5h0qF4wdHp",
    "zAuEIfTfysbE4Oa8STOsyvMjCv18JK1oqgYNqLBon_HeogieDJ9QzCEm1f1GwUJcJRrEw2s1MUDNRChKOa0NZ",
    "NJbEvNezRqNPZqKDRPHhK4rPdrlgD0Q8WarIiFphK914qOdqGloSqu4SFB",
    "4P1UWA70CNGvEqb4jgWzJtoKizxeahV0PnOA",
    "HJT2gxlmkWA0sMgvgeeVsC2UNVu6u9L5a3EcnCz_RZcwOSx372QI9Yr3PX",
    "AnjEr0fCluzEGxz8gkrnpLf_43xGwyiaNFBZj4kAVuT5ode1P721aFwLdo1hFyn4actGNf7U9SpCiUVB",
    "2bImfYogX2ilbKdN2sKhca5toAWgYZSeymMtiWBSfZKaVCIRuwJjmWJLAP",
    "QguC17HOYBPML82guARWh6ShXJEdAmq5LHoCgauCq2C5QubwXCm_9s0sJ2KDD77mHfHDaCuh3IdBCLnat3FY1_NgWim0JFFKup1K",
    "TpLFN4r3AKLRcdn2zT1p1wnc1FvYiW0uAYKgzlQwkmmHH6iiNrd80S5rCckbK9P6Tg4VAwROj",
    "S2_Uz2K86",
    "fxk9Vnx_7AxavoS4BmqGvDoj0Q7sLNBSzZC50ThqkoPNRr9zAj1AiqcWWbL4jUQ6F_t2X4QWxSp9vyK1qPFAHzRaxJ",
    "K8s_OR6miNuTi0bOt9EkdAW6e3Ui1nh3CVmIc0V_bVL8P",
    "XGKPNzSkId_XogD4odHC_lOCf6_LWvwHI6RHxf7cZQR5Xc4t7jAVJqSmR26_d02vDibJzkXdHt9Bgu4Ed",
    "FkneJEhSqFOfMgw2b6qqg9VvVxz43277FVGlJ6tTFDEeZSR98vOb1FFe",
    "r9MZyCK4__Ue0MHR4mrKZtIcEnjCON5pNzgy0VTkurHw7TxR40bv7LUeMooXoq5Q7HuT6mm0Eg608y55qSYW9chpFq5",
    "qrLZ2Z9xHbmC4uUocoonw4uYPi8B3GIz3dQiLsAPJBJ7tdLah8YmbCDKxheeZdC3SxwCLm",
    "fXz_wZMcJrm6pUWgz4GNr8XXdyTOusMr2Japbu4PNWbx58DkXgeBFKswS1D0my_dxKBnfUhpKvnEMzMiI",
    "9sr4BEUgmgJVOE7OjSNCHOBfzV5QTo47oAoGsozXKtTAc8NkSFtNDYBqu5EdVvtLseJGVhcbnEDeC38qoBQbIXvM7Clky9VhyY",
    "ZXwaIUlHJj35UnohzY5Ol",
    "Hv10Cctqv5dvqxFcoPyJWIOOFlpN1unAsjJNoJMZSQBeJna7KDYz8VP_IsCkyKszOSVlKaUF4DHoL",
    "vcfpomjCYE44kjw3v2fnlxzRSvDmDECk4RfXJRgg3U_WdelWkftg1Cb_zGxyAwAYCAQXgu",
    "2RcuSlP27PzE1nmcMskhjsibZ9o5OWha5Rjc8bvX17sPJ55_XWdIlQTWJUfA",
    "V_stdeObH8LmvFx6gorzQGnWZRjXYMJ1mg2uf9AQP0Oxcjx32wxOmJqPktY7QTWYKv7bmzjqL4NEYJk",
    "JuQlQiduR5lSvruSkW1V8c_G",
    "wb4tiMBouBTwUn3S6T_E6TD7GvMUm2lQ441tKw8_GZA",
    "U4XJLQGeLLM8hiN9I_25yFdk23eIMbWLd2QzIO27BouNs1qXpBBQiw5_q41GPClXLXAv",
    "72MKrwY4F04TnXjiZyIlCJflUH2ASoQjYXdasdRpLcQFY8IdUMm_kCIVmOUaHhiI07Q0dC0HXBwIotIo0pQcNV6BxaInZU",
    "PVRu5OvH1TLSAtwKRoa3Bpak3YjusecpmdPwWa3zHsD8GTvZj9h4s1oUJfpsRhznhbe0gtbCWR5KVdhlnJLQprAqKjKLU_b",
    "SjRPkuuRjAjJcjtbwpszVvBnq9qtkZHr29EyYT1WcLjB3YlGU2KmArBejObQMwvwlcFcavSBqVDMm_F2gvPcKjRR",
    "P8e6NWyXLfF25HzYHRepsv0Eh0OzdDRjkwsLQB9ZC8pqpNL4nuv9Rc1hyLqu2ocYygOoYJeXF",
    "TjREVeRJMf8J0jfdzkOeykUdHSqZ85qUm3nUzRkdGYRF",
    "MBGi8Uf5RXgIjzhEbmW",
    "utAM9H8wk9tskqiFBXnVaDYPIi_yn",
    "GQLqtRQg0aVvjRnE9YUwVjSQ4540yomZ6QSUFH1Lg343D3PhrVVn5lUqSGYPOtNWiLbmqgUjY",
    "yUU5UY8Bd8DLLEdki9arqZZm1E_7CjZaIqZ7MB77m7ZCOsPy0fq54TcMH3aYbrkHvmlDGB1N",
    "7jynqQl9zA3nTVtPT4_1L5W1JgWkWB59qmT1TN9SEELvdIxN795VHixZyye",
    "FtO88BV2n5_zCIhZ_Aw1ggmBdlXHNcwlr1YoOx9C58SAkqxxYWWJrbwJmbSl90",
    "sXVkomTMjOe8v2n8BNfPcH02c4VSlT0ZViBg",
    "8qBHtRIrckp04wN8f47rUorwJHtrJtr6YccFwaAyYcNCb1FugjDCvW4_t0iR4Vsl_ATX3b93",
    "AJHB2zeie5Qi3li5ncLpgq_duwQIFwa0lwjOBgk7DNxrb26eXYkHZeREn5WxiLDTnbuPWOC0M5A9WWcSvOQLyO",
    "53Zpg09m3RpuvU5hmIliTgJIcR7lw287lyIUhLFPgxAX8K8pYvcshLdmBPh2y5cd",
    "f5tuNChI_eFB8tujvccewE5xC97wVk2EgJWiaHDCVT7lC4kKCwuSWHGFpkzMeb",
    "j5AxfUmgqyH9K4RWGOlnYmqsOmo_mm2Y33iX2TvDiRw_wgpvRjvfI9esFZXhWWNkuKe7Uew3JzVbOEBEonDG",
    "0kBm1uKcwnYKqvBDjGlQuDmvMY7AR33g4t7l_flG1pIoRQM1Vpb5gedzRJGgIDv7PUsTY0H4Rqt3d",
    "FFFnSx8LlTtNUcasFiVKt4cE_7f6wYrtHc_hqIw7xK0R6IOpgYn_5ChArwMtZXXf5",
    "8qCzAgC6fZqF5dFgjIqkVtm_hXppubzU8ezUfDu8EHDAywh6g4BWzneRZxnJYCmIE4VUuaLZbhj85UXXYd",
    "Qoa1YpL",
    "NGekhlVxxegC",
    "68K0ioR0U3MS5DaysoVYUmqp34cWtk74SzveBtTN5YHgm4vFzdCKb0S52cvE67Q89QtFx35HTABuZMhMAxmHhe5lktwpKgfSS",
    "2nICHwhDIJmNC1QsYekJlOOJWv7EJn3fUiSKAObJdjhSbjS2NEsB3w",
    "Juw14DHZBvMTmar4fjb5l3P5ACRS7qz8xe6dRrC3A3",
    "Ch602MS1FAY6a7CTGJPxJ0xQg4uzorbCiuy",
    "POBUDLKxFxuMyqc36qZicMRtDAWNBh3yROknkXM6udTxhpLjwfff4KzD2Lhgr5a4W1kEkSa_",
    "SHg3WWZ1piPKXLYI1AaW0d6nYvalNytqCEjrvrt8imMBsqQn9lBGOMSG4dWdvWml3OTZyiHwzmTWVUhPzIO7iSEjSeLl3uiX3",
    "rtRn1fBtl14zAOFtlzEr1h9VBTfxeMtEhGMQP0lb_Y73d1ac_HX9gG6axKBgD8f2_7",
    "3ZntmghjQvSNu6oqoDQjO80xxhi7egdx4jd1AdJtvaasjSdcObpTpeHuYRiHpbaaQT",
    "oV4l1hO5kWbI76Pj5jgt3uS1LcoKX7EDCdj5CX0F3TVem",
    "z8Cf",
    "zUBDgsRVLtBLHEL_MJY9GLBEevDgYJc8CQ1H1OuUkOXIWifvmH_er_X",
    "ryhoj3oiQlTFRFlvFhWiszIwI5XusxzABF5R_fUd23CiRoLQWloHScl",
    "uNx2r5a2g1azWt6b0r8gHXYtKH8NLChbPub1Nw1j26wF",
    "rFfcouZ1SluE__f1",
    "039L3ZTaoKs7M0ln4vqhWcgINheKO9J5kOidhKVzR4BZRZ3S0pmGeJnOCq_BaN5E17HLdelS6eSArtf7Znr5LjN5OXPNxxS",
    "29rZqP6MUfcuoYTFbCwAi7UhjZpgW",
    "J8lru2vNm1i_j6dcDTHEDQ18clobb8WkFxjtYbtcit1jRMzfnjHY74EaEUczyd9ufT61rLCkIh",
    "F3B1vjy65JbPVB3pZXjk8NJN8PbDuNUoyJFkomOOVz7CewgiskAamFqz3fKhLc1192ie45VQdzCfHc2wThSztuFUf",
    "r8K86uCes85wm0_DaBl4Ltr0SNcT2e_gtoB6CSeOB90ySwKv6lK",
    "uHwF27d50f4xYQ0wre5rkKnTRjGMWgschPLHrx7HBHA8LkovIbebxcNQhnoAWej9prNEtFlc",
    "iEyBwDjW3i2m5sisyLa5sCY2JzyxbuNd5XdEdQWJF_4NjCYQMFLcYq21xzLd5Y",
    "2OiEA5eKRqgW",
    "Jk8RRwA1jA8giXEDEWj",
    "LNP7jvqJOWAyTHTxCmBaGoIWLoc8ns_00BdiWBun0yuVb7",
    "rzZ3dYJ46Oueu_VBhvJMIp3YMe",
    "kr4nQQB5Z5YpB2Oea6Pd42fB7u4RgkSy5YT2hU0j7p6Xcnz0tsm9tztr0XmXjhwopNE_PDWgY0vzdRmoXXPVlIy0zd0C",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 761);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
