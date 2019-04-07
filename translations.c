/*
 * DO NOT EDIT THIS FILE!
 * Generated by ./po2gperf.pl
 */
#include "translations.h"
#include <string.h>

struct event_title * hebcal_lookup_ashkenazi(const char *str, unsigned int len);
struct event_title * hebcal_lookup_ashkenazi_litvish(const char *str, unsigned int len);
struct event_title * hebcal_lookup_ashkenazi_poylish(const char *str, unsigned int len);
struct event_title * hebcal_lookup_ashkenazi_standard(const char *str, unsigned int len);
struct event_title * hebcal_lookup_fi(const char *str, unsigned int len);
struct event_title * hebcal_lookup_fr(const char *str, unsigned int len);
struct event_title * hebcal_lookup_he(const char *str, unsigned int len);
struct event_title * hebcal_lookup_hu(const char *str, unsigned int len);
struct event_title * hebcal_lookup_pl(const char *str, unsigned int len);
struct event_title * hebcal_lookup_ru(const char *str, unsigned int len);

hebcal_lang g_lang = HEBCAL_LANG_DEFAULT;

void hebcal_set_language(hebcal_lang lang) {
    g_lang = lang;
}

hebcal_lang hebcal_get_language(const char *locale) {
    if (!locale || !locale[0]) {
        return HEBCAL_LANG_DEFAULT;
    } else if (0 == strcmp(locale, "ashkenazi")) {
        return HEBCAL_LANG_ASHKENAZI;
    } else if (0 == strcmp(locale, "ashkenazi_litvish")) {
        return HEBCAL_LANG_ASHKENAZI_LITVISH;
    } else if (0 == strcmp(locale, "ashkenazi_poylish")) {
        return HEBCAL_LANG_ASHKENAZI_POYLISH;
    } else if (0 == strcmp(locale, "ashkenazi_standard")) {
        return HEBCAL_LANG_ASHKENAZI_STANDARD;
    } else if (0 == strcmp(locale, "fi")) {
        return HEBCAL_LANG_FI;
    } else if (0 == strcmp(locale, "fr")) {
        return HEBCAL_LANG_FR;
    } else if (0 == strcmp(locale, "he")) {
        return HEBCAL_LANG_HE;
    } else if (0 == strcmp(locale, "hu")) {
        return HEBCAL_LANG_HU;
    } else if (0 == strcmp(locale, "pl")) {
        return HEBCAL_LANG_PL;
    } else if (0 == strcmp(locale, "ru")) {
        return HEBCAL_LANG_RU;
    } else {
        return HEBCAL_LANG_UNDEFINED;
    }
}

const char * lookup_translation(const char *src) {
    struct event_title *et;
    if (!src || !src[0]) {
        return src;
    }
    switch (g_lang) {
        case HEBCAL_LANG_DEFAULT:
            return src;
        case HEBCAL_LANG_ASHKENAZI:
            et = hebcal_lookup_ashkenazi(src, strlen(src));
            break;
        case HEBCAL_LANG_ASHKENAZI_LITVISH:
            et = hebcal_lookup_ashkenazi_litvish(src, strlen(src));
            break;
        case HEBCAL_LANG_ASHKENAZI_POYLISH:
            et = hebcal_lookup_ashkenazi_poylish(src, strlen(src));
            break;
        case HEBCAL_LANG_ASHKENAZI_STANDARD:
            et = hebcal_lookup_ashkenazi_standard(src, strlen(src));
            break;
        case HEBCAL_LANG_FI:
            et = hebcal_lookup_fi(src, strlen(src));
            break;
        case HEBCAL_LANG_FR:
            et = hebcal_lookup_fr(src, strlen(src));
            break;
        case HEBCAL_LANG_HE:
            et = hebcal_lookup_he(src, strlen(src));
            break;
        case HEBCAL_LANG_HU:
            et = hebcal_lookup_hu(src, strlen(src));
            break;
        case HEBCAL_LANG_PL:
            et = hebcal_lookup_pl(src, strlen(src));
            break;
        case HEBCAL_LANG_RU:
            et = hebcal_lookup_ru(src, strlen(src));
            break;
        case HEBCAL_LANG_UNDEFINED:
        default:
            return src;
    }
    if (et && et->dest && et->dest[0]) {
        return et->dest;
    }
    return src;
}
