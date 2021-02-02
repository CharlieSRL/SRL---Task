# 1 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\advance shopping\\\\combined_Advance Shopping.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\advance shopping\\\\combined_Advance Shopping.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\advance shopping\\\\combined_Advance Shopping.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2



 
 



# 3 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\advance shopping\\\\combined_Advance Shopping.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\advance shopping\\\\combined_Advance Shopping.c" 2

# 1 "Action.c" 1
Action()
{

	web_url("device-desc.xml", 
		"URL=http://192.168.100.38:8008/ssdp/device-desc.xml", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	 

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	lr_think_time(9);

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//05DlobpwrrzZRCgYIARAAGAUSNwF-L9IrWkJbc2fuvjsMBN5TXo1ACVS7vwXs2DXoxlXkqGPkiwnmpmgUmgQf0Hhywc4RRuEFtUs&scope=https://www.googleapis.com/auth/chromesync", 
		"LAST");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/vendor/requirejs/require.js", "ENDITEM", 
		"Url=/css/images/favicon.ico", "ENDITEM", 
		"Url=/main.min.js", "ENDITEM", 
		"Url=/services.properties", "ENDITEM", 
		"Url=https://www.google-analytics.com/analytics.js", "ENDITEM", 
		"Url=/css/images/logo.png", "ENDITEM", 
		"Url=/css/images/closeDark.png", "ENDITEM", 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j82&a=56843997&t=pageview&_s=1&dl=https%3A%2F%2Fwww.advantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1536x864&vp=1536x722&je=0&_u=IEBAAEAB~&jid=1050170641&gjid=1120876286&cid=1443963958.1590774995&tid=UA-81334227-1&_gid=991534009.1590774995&_r=1&z=617974549", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1236", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1237", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1235", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1238", "ENDITEM", 
		"Url=/css/images/GoUp.png", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1234", "ENDITEM", 
		"Url=/css/images/Special-offer.jpg", "ENDITEM", 
		"Url=/css/images/facebook.png", "ENDITEM", 
		"Url=/css/images/linkedin.png", "ENDITEM", 
		"Url=/css/images/twitter.png", "ENDITEM", 
		"Url=/css/images/Popular-item2.jpg", "ENDITEM", 
		"Url=/css/images/Banner1.jpg", "ENDITEM", 
		"Url=/css/images/Banner2.jpg", "ENDITEM", 
		"Url=/css/images/Popular-item1.jpg", "ENDITEM", 
		"Url=/css/images/Popular-item3.jpg", "ENDITEM", 
		"Url=/css/images/Banner3.jpg", "ENDITEM", 
		"LAST");

	web_add_cookie("SID=wwfYkNPmwaF0HjxoGxI9gvFa5YSS3PdtLkZrGjGqxCsN9cOIkTnmJb3GxYU0EvWwSqDfPA.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=wwfYkNPmwaF0HjxoGxI9gvFa5YSS3PdtLkZrGjGqxCsN9cOI90eb3Fgoodb39WYZbhJ30A.; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=AY9wpEL5UWxafWmIM; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AQF2FeuT0r_0-1Q1F; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=-Q2uhRf1rGQkiVE5/AyU2irG3ubboOLzEO; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=2TeNTDO48WQqOvfq/AA4mIf750NtW4XCJr; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-HSID=AY9wpEL5UWxafWmIM; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-SSID=AQF2FeuT0r_0-1Q1F; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-APISID=-Q2uhRf1rGQkiVE5/AyU2irG3ubboOLzEO; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=2TeNTDO48WQqOvfq/AA4mIf750NtW4XCJr; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI6Q7JLyvs-SEyT-hhLzyU_Jb--5RuwsV-CqQC8jxBVx0-IexUj1SHEIhTMdUvl0D7t_d_8GoqgLv7AtIEiUM5GDwzrY64KI1YTV-6C9W7CTRFt-smPv5reHV-4B53-bNSuTcH1Y; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQI048B; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=doritos|o.gds.google.com|s.CR|s.youtube:wwfYkK4DTESxiIwbgzpJMRBlz-9A7dErQa4Jz-hfKO2x2FTZHI-1l9Nln_nF2HRStgN9uA.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=doritos|o.gds.google.com|s.CR|s.youtube:wwfYkK4DTESxiIwbgzpJMRBlz-9A7dErQa4Jz-hfKO2x2FTZJTQrc8V9syB7i5AS5hgTpg.; DOMAIN=accounts.google.com");

	web_add_cookie("ANID=AHWqTUnhwd2qn7SZpFHc5_FSMNJBmJ5PjgTRSZ7uQbMXxHEaPLupC61kxZlByRHf; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:XKNK6fileGrZVvhfSCyq5rwp9q4s4kafUPg9Fi3Qrw12g4uwEMUVkDSwBwRy6h2X97f4aik6aS3gh9s0uBMsGmbjLcy84w:EUwFDseGui5GnYDs; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:XKNK6fileGrZVvhfSCyq5rwp9q4s4kafUPg9Fi3Qrw12g4uwEMUVkDSwBwRy6h2X97f4aik6aS3gh9s0uBMsGmbjLcy84w:EUwFDseGui5GnYDs; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2020-05-29-14; DOMAIN=accounts.google.com");

	web_add_cookie("NID=204=rCmFKO0ZZXVaSngwZmdtlqJg1QijUX8xSRBDA8AIqxYMgT1xi6CykkTAtI6BT9WUU6wgF4XrIiqYPVX_Df6i7stlUi-nBXlcw2zKtflXAtk1ZuhS7xUFB7sdPjrTYmgkaOriU7vvJj8Soma2Pi5erwp6V-NVzqYswuNxUG8LvP7EEl8Uv93qqQ60DCO7S4JP9eGbmBXQ55jcfn4aQk67oeQCNcjnJLrgR4RzycSGSfpjrhichMaodjHrp7QjZm_wJjwS; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AJi4QfEhqNuAHCfup4YDR7cmCSYsVc_M3Hc18_aLJ9BijUtTtjSIBIzkoG1IH_VtXpJQeHmQk8KI; DOMAIN=accounts.google.com");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"Body= ", 
		"LAST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_url("dynamicConfig.json", 
		"URL=https://d27xxe7juh1us6.cloudfront.net/dynamicConfig.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", "ENDITEM", 
		"LAST");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=83", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//05DlobpwrrzZRCgYIARAAGAUSNwF-L9IrWkJbc2fuvjsMBN5TXo1ACVS7vwXs2DXoxlXkqGPkiwnmpmgUmgQf0Hhywc4RRuEFtUs", 
		"LAST");

	web_add_cookie("gnar_containerId=nltlafi2iekk4o2; DOMAIN=auth.grammarly.com");

	web_add_cookie("_ga=GA1.2.1498503526.1588637103; DOMAIN=auth.grammarly.com");

	web_add_cookie("ga_clientId=1498503526.1588637103; DOMAIN=auth.grammarly.com");

	web_add_cookie("_gcl_au=1.1.1443442737.1588637103; DOMAIN=auth.grammarly.com");

	web_add_cookie("_fbp=fb.1.1588637103486.1031300251; DOMAIN=auth.grammarly.com");

	web_add_cookie("_hjid=8d8ab2d9-167f-4345-aae2-cd8518fb2edf; DOMAIN=auth.grammarly.com");

	web_add_cookie("tdi=lfcov3893wwuutq9; DOMAIN=auth.grammarly.com");

	web_add_cookie("grauth=AABH04cKRmr8CNQ9Oq_cvF5QKHTIfb8vKBkw15drzc2KnQKSIRhNjS8NfPzGwUywecpP36c2-WmtAhCm; DOMAIN=auth.grammarly.com");

	web_add_cookie("csrf-token=AABH04xhHlkwJp++cdkT9crG/UYUlN9uW7gFAg; DOMAIN=auth.grammarly.com");

	web_add_cookie("experiment_groups=fluid_gdocs_rollout_enabled|gdocs_sidebar_onepercent_enabled|officeaddin_ue_exp3_enabled|extension_new_rich_text_fields_enabled|safari_migration_inline_disabled_enabled|officeaddin_upgrade_state_exp1_enabled1|officeaddin_outcomes_ui_exp5_enabled1|gdocs_for_chrome_enabled|quarantine_messages_enabled|apollo_rollout_gate_enabled_1|autocorrect_new_ui_v3|emogenie_beta_enabled|officeaddin_upgrade_state_exp2_enabled1|denali_link_to_kaza_enabled|gdocs_for_all_safari_enabled|"
		"safari_migration_backup_notif1_enabled|safari_migration_popup_editor_disabled_enabled|officeaddin_proofit_exp3_enabled|shadow_dom_sidebar_onepercent_enabled|gb_in_editor_free_Test1|safari_migration_inline_warning_enabled|send_email_premium_popup_aggressive_enabled|gdocs_for_all_firefox_enabled|gdocs_new_mapping_enabled|officeaddin_perf_exp3_enabled|officeaddin_muted_alerts_exp2_enabled1; DOMAIN=auth.grammarly.com");

	web_add_cookie("0uNo6TlgXn=0uNo6TlgXn; DOMAIN=auth.grammarly.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_add_header("x-client-type", 
		"extension-chrome");

	web_add_header("x-client-version", 
		"14.959.0");

	web_add_header("x-container-id", 
		"nltlafi2iekk4o2");

	web_add_header("x-csrf-token", 
		"AABH04xhHlkwJp++cdkT9crG/UYUlN9uW7gFAg");

	web_custom_request("oranonymous", 
		"URL=https://auth.grammarly.com/v3/user/oranonymous?app=chromeExt", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=", 
		"EXTRARES", 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", "ENDITEM", 
		"LAST");

	web_custom_request("logv2", 
		"URL=https://f-log-extension.grammarly.io/logv2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"logger\":\"bg.user.fetch.fail\",\"level\":\"WARN\",\"extra\":{\"json\":\"{}\"},\"application\":\"extensionChrome\",\"version\":\"14.959.0\",\"env\":\"prod\"}", 
		"LAST");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"LAST");

	web_url("all_data", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"LAST");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		"EXTRARES", 
		"Url=../css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CUci0YPRDWUuEgsN541ADhIAGgAiABILDc5BTHoSABoAIgASCw14bxIZEgAaACIAEgsNDxa-KxIAGgAiABoA?alt=proto", "Referer=", "ENDITEM", 
		"LAST");

	web_add_cookie("_ga=GA1.2.1443963958.1590774995; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.991534009.1590774995; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/css/images/arrow_right.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,llkgjffcdpffmhiakmfcdcblohccpfmo,gcmjkmgdlgnkkcocmoeiminaijmmjnii,aemomkdncapdnfajjbbcbdebjljbpmpj,mimojjlkmoijpicakmndhoigimigcmbb,hfnkpimlhhgieaddgfemjhofmfblmnib,oimompecagnajdejgnnjijobebaeigek,khaoiebndkojlmppeemjhbpbandiljpe,hnimpnehoodheedghdeeijklkeaacbdc,gkmgaooipdjhmangpemjhigmamcehddo,copjbmjbojbakpaedmpkhmiplmmehfck,jflookgnkcckhobaglndicnbbgbonegd,giekcmmlnklenlaomppkphknjmnnpneh,ehgidpndbllacpjalkiimkbadgjfnnmc,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
		"bklopemakmnopmghhmccadeonafabnal");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-83.0.4103.61");

	lr_think_time(4);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:3500396163&cup2hreq=e53202c8ae70799805e5c77108b15d269c7bca9d019a1cd8ca5b9c78a0447c37", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"OKWM\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{1168aef3-3f98-404a-9c3f-f9a6dd572be5}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"OKWM\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{6e8bb347-017a-4c1d-adb4-3c21e25c2350}\",\"rd\":4897},\"updatecheck\":{},\""
		"version\":\"0.0.0.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"OKWM\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{a0666c38-bdec-4400-b6f2-80da0d4bb3d0}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"OKWM\",\"enabled\""
		":true,\"ping\":{\"ping_freshness\":\"{41db59b7-2a1f-4b65-b184-963f16319760}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"OKWM\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e03bbdaab3b8f98164302f2b1d5a623bd5f6f393cc5279cf553329eed3d7b993\"}]},\"ping\":{\"ping_freshness\":\"{68b04282-ce81-4415-a9e1-58a4ecbfc9c1}\",\"rd\":4897},"
		"\"updatecheck\":{},\"version\":\"32.0.0.371\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"OKWM\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b9be14bccfb042cc7fa41c072529b68ec6780435cf2e1c2d3b70ce263119c7d2\"}]},\"ping\":{\"ping_freshness\":\"{948d8665-c708-49fd-96a2-d7c5dadf80c6}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"5901\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"OKWM\""
		",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{23acc276-5ff0-4660-8c46-526d9b0cd928}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"OKWM\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{97a2dea8-94d9-48a6-a85a-f2c7da055ee2}\",\"rd\":4897},\""
		"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"OKWM\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{a2bffd58-23f7-4c87-a378-b9380351023a}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"OKWM\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\""
		"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a94e96f52af7838519aac1ae4ef68686817be9661165e20964f81c2b5bec7740\"}]},\"ping\":{\"ping_freshness\":\"{22852417-5ad2-4e74-909d-73cfd89e1f27}\",\"rd\":4897},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"83.236.200\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"OKWM\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\"{4b4e4e09-a9e7-495a-af25-fa63fb73ac89}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"OKWM\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fbfe4752b3e0c024c86597200792806e61453712eea98e9036d6e1ee12885a68\"}]},\"ping\":{\"ping_freshness\":\""
		"{422cef11-a78c-43b8-8aa1-f12124be0aa8}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"1225\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"OKWM\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{f0ef3b59-eb9c-46f3-a4af-c558813c6d61}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\""
		"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"OKWM\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{73ed9d44-fdc4-4493-b159-34ea4b12f324}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"OKWM\",\"cohort\":\"1:ut9:\",\"cohorthint\":\""
		"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.59f80dfc20335b1b6c4562bf68e07f7eeb1ac8b6f5d3099beefa6e130a1ab368\"}]},\"ping\":{\"ping_freshness\":\"{0531ce99-67fe-4e4f-a0f2-74e1926388a2}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"2020.5.17.1142\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"OKWM\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{ddfef10c-bb0e-432c-865f-4d01a0246ced}\",\"rd\":4897},\"updatecheck\":{},\"version\":\"3\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":32},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.16299.1686\"},\"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\"requestid\":\""
		"{c42142e9-f966-469f-b1bb-06728c23d198}\",\"sessionid\":\"{28931f08-ca58-497c-bc4f-2753a1bc0c47}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.61\"}}", 
		"LAST");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(18);

	web_custom_request("email", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/support/contact_us/email", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"categoryId\":1,\"email\":\"test1@microfocus.com\",\"productId\":9,\"text\":\"Test\"}", 
		"LAST");

	return 0;
}
# 5 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\advance shopping\\\\combined_Advance Shopping.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\advance shopping\\\\combined_Advance Shopping.c" 2

