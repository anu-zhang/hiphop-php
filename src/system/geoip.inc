// @generated by "php idl.php inc {input.idl.php} {output.inc}"

#if EXT_TYPE == 0
"geoip_db_avail", T(Variant), S(0), "database", T(Int64), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from http://php.net/manual/en/function.geoip-db-avail.php )\n *\n *\n * @database   int\n *\n * @return     mixed\n */", 
"geoip_db_filename", T(Variant), S(0), "database", T(Int64), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from http://php.net/manual/en/function.geoip-db-filename.php )\n *\n *\n * @database   int\n *\n * @return     mixed\n */", 
"geoip_db_get_all_info", T(Array), S(0), NULL, S(16384), "/**\n * ( excerpt from\n * http://php.net/manual/en/function.geoip-db-get-all-info.php )\n *\n *\n * @return     map\n */", 
"geoip_database_info", T(Variant), S(0), "database", T(Int64), "s:21:\"GEOIP_COUNTRY_EDITION\";", "GEOIP_COUNTRY_EDITION", S(0), NULL, S(16384), "/**\n * ( excerpt from http://php.net/manual/en/function.geoip-database-info.php\n * )\n *\n * Returns GeoIP Database information\n *\n * @database   int\n *\n * @return     mixed\n */", 
"geoip_country_code_by_name", T(Variant), S(0), "hostname", T(String), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from\n * http://php.net/manual/en/function.geoip-country-code-by-name.php )\n *\n * Return the Country Code found in the GeoIP Database\n *\n * @hostname   string\n *\n * @return     mixed\n */", 
"geoip_country_code3_by_name", T(Variant), S(0), "hostname", T(String), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from\n * http://php.net/manual/en/function.geoip-country-code3-by-name.php )\n *\n * Return the Country Code found in the GeoIP Database\n *\n * @hostname   string\n *\n * @return     mixed\n */", 
"geoip_country_name_by_name", T(Variant), S(0), "hostname", T(String), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from\n * http://php.net/manual/en/function.geoip-country-name-by-name.php )\n *\n * Returns the Country name found in the GeoIP Database\n *\n * @hostname   string\n *\n * @return     mixed\n */", 
"geoip_continent_code_by_name", T(Variant), S(0), "hostname", T(String), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from\n * http://php.net/manual/en/function.geoip-continent-code-by-name.php )\n *\n * Returns the Continent name found in the GeoIP Database\n *\n * @hostname   string\n *\n * @return     mixed\n */", 
"geoip_org_by_name", T(Variant), S(0), "hostname", T(String), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from http://php.net/manual/en/function.geoip-org-by-name.php )\n *\n * Returns the Organization Name found in the GeoIP Database\n *\n * @hostname   string\n *\n * @return     mixed\n */", 
"geoip_record_by_name", T(Array), S(0), "hostname", T(String), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from\n * http://php.net/manual/en/function.geoip-record-by-name.php )\n *\n * Returns the detailed City information found in the GeoIP Database\n *\n * @hostname   string\n *\n * @return     map\n */", 
"geoip_id_by_name", T(Variant), S(0), "hostname", T(String), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from http://php.net/manual/en/function.geoip-id-by-name.php )\n *\n * Returns the Net Speed found in the GeoIP Database\n *\n * @hostname   string\n *\n * @return     mixed\n */", 
"geoip_region_by_name", T(Array), S(0), "hostname", T(String), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from\n * http://php.net/manual/en/function.geoip-region-by-name.php )\n *\n * Returns the Country Code and region found in the GeoIP Database\n *\n * @hostname   string\n *\n * @return     map\n */", 
"geoip_isp_by_name", T(Variant), S(0), "hostname", T(String), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from http://php.net/manual/en/function.geoip-isp-by-name.php )\n *\n * Returns the ISP Name found in the GeoIP Database\n *\n * @hostname   string\n *\n * @return     mixed\n */", 
"geoip_region_name_by_code", T(Variant), S(0), "country_code", T(String), NULL, NULL, S(0), "region_code", T(String), NULL, NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from\n * http://php.net/manual/en/function.geoip-region-name-by-code.php )\n *\n * Returns the region name for some country code and region code combo\n *\n * @country_code\n *             string\n * @region_code\n *             string\n *\n * @return     mixed\n */", 
"geoip_time_zone_by_country_and_region", T(Variant), S(0), "country_code", T(String), NULL, NULL, S(0), "region_code", T(String), "N;", "null", S(0), NULL, S(16384), "/**\n * ( excerpt from\n * http://php.net/manual/en/function.geoip-time-zone-by-country-and-region.php\n * )\n *\n * Returns the time zone for some country code and region code combo\n *\n * @country_code\n *             string\n * @region_code\n *             string\n *\n * @return     mixed\n */", 
"geoip_db_reload", T(Boolean), S(0), NULL, S(16384), "/**\n * ( excerpt from http://php.net/manual/en/function.geoip-db-reload.php )\n *\n * Resets the current db file and reloads it\n *\n * @return     bool    Returns TRUE if db reloaded successfully\n */", 

#elif EXT_TYPE == 1
"GEOIP_COUNTRY_EDITION", T(Int64),
"GEOIP_REGION_EDITION_REV0", T(Int64),
"GEOIP_CITY_EDITION_REV0", T(Int64),
"GEOIP_ORG_EDITION", T(Int64),
"GEOIP_ISP_EDITION", T(Int64),
"GEOIP_CITY_EDITION_REV1", T(Int64),
"GEOIP_REGION_EDITION_REV1", T(Int64),
"GEOIP_PROXY_EDITION", T(Int64),
"GEOIP_ASNUM_EDITION", T(Int64),
"GEOIP_NETSPEED_EDITION", T(Int64),
"GEOIP_DOMAIN_EDITION", T(Int64),
"GEOIP_UNKNOWN_SPEED", T(Int64),
"GEOIP_DIALUP_SPEED", T(Int64),
"GEOIP_CABLEDSL_SPEED", T(Int64),
"GEOIP_CORPORATE_SPEED", T(Int64),
"GEOIP_STANDARD", T(Int64),
"GEOIP_MEMORY_CACHE", T(Int64),
"GEOIP_CHECK_CACHE", T(Int64),
"GEOIP_INDEX_CACHE", T(Int64),
"GEOIP_MMAP_CACHE", T(Int64),

#elif EXT_TYPE == 2

#elif EXT_TYPE == 3

#endif