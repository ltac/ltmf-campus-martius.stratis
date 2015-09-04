/* BOOL: false to add long range radios to all group leaders,
 * true to do nothing
 */
tf_no_auto_long_range_radio = true;

/* BOOL: true to enforce the side-specific shortwave frequencies below */
tf_same_sw_frequencies_for_side = true;

/* BOOL: true to enforce the side-specific long range frequencies below */
tf_same_lr_frequencies_for_side = true;

tf_freq_west = [0 ,7, ["110","120","130","140","150","160","170","180"],0, nil, -1, 0];
tf_freq_west_lr = [3 ,7, ["31","32","33","34","35","36","37","38","39"],0, nil, -1, 0];

tf_freq_east  =   [0 ,7, ["110","120","130","140","150","160","170","180"],0, nil, -1, 0];
tf_freq_east_lr = [3 ,7, ["31","32","33","34","35","36","37","38","39"],0, nil, -1, 0];

tf_freq_guer  =   [0 ,7, ["110","120","130","140","150","160","170","180"],0, nil, -1, 0];
tf_freq_guer_lr = [3 ,7, ["31","32","33","34","35","36","37","38","39"],0, nil, -1, 0];