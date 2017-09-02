import logging
logging.basicConfig(format = '%(levelname)-8s [%(asctime)s]  %(message)s', level=logging.DEBUG)



logging.info( u'Информационное сообщение' )

logging.warning( u'Предупреждение' )

logging.error( u'Ошибка' )

logging.critical( u'Fatal!!!')