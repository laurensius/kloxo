php_yum="yum install -y --skip-broken"

php_exclude="--exclude=*debuginfo* --exclude=php*-xcache* --exclude=php*-pecl-imagick* --exclude=php*-eaccelerator* --exclude=php*-pecl-zendopcache* --exclude=php*-pgsql84* --exclude=php*-opcache* --exclude=php*-fpm-httpd* --exclude=php*-fpm-nginx* --exclude=php*-pecl-sphinx*"

php53u_run="${php_yum} php53u-* ${php_exclude}"

php54_run="${php_yum} php54-* --exclude=php*-mysql* --exclude=php*-pecl-memcache* ${php_exclude}"

php55u_run="${php_yum} php55u-* ${php_exclude}"
php55w_run="${php_yum} php55w-* ${php_exclude}"

php56u_run="${php_yum} php56u-* ${php_exclude}"
php56w_run="${php_yum} php56w-* ${php_exclude}"

php70u_run="${php_yum} php70u-* ${php_exclude}"
php70w_run="${php_yum} php70w-* --exclude=php*-mysql* ${php_exclude}"

php71u_run="${php_yum} php71u-* mod_php71u ${php_exclude}"
php71w_run="${php_yum} php71w-* mod_php71u --exclude=php*-mysql* ${php_exclude}"


