/**
 * PPRetailInvoiceTemplate.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: node_modules/paypal-invoicing/lib/Template.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"

@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailTransactionContext;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailEmvDevice;
@class PPRetailSecureEntryOptions;
@class PPRetailNumericEntryOptions;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailDeviceOperationResultHandler;
@class PPRetailVirtualPaymentDevice;
@class PPRetailPayer;
@class PPRetailTransactionRecord;

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * Invoice template
 */
@interface PPRetailInvoiceTemplate : PPRetailInvoice

    /**
    * true if this is the default template
    */
    @property (nonatomic,assign) BOOL isDefault;
    /**
    * true if this is a custom template
    */
    @property (nonatomic,assign) BOOL isCustom;
    /**
    * name of the template
    */
    @property (nonatomic,strong,nullable) NSString* name;
    /**
    * unit of measure for the template,
 * known values: AMOUNT, QUANTITY, HOURS
    */
    @property (nonatomic,strong,nullable) NSString* unitOfMeasure;
    /**
    * list of which fields are enabled/disabled
    */
    @property (nonatomic,strong,nullable) PPRetailInvoiceTemplateSettings* settings;

    - (instancetype _Nullable)initWithCurrencyCode:(NSString* _Nullable)currencyCode;
    - (instancetype _Nullable)init NS_UNAVAILABLE;
    + (instancetype _Nullable)new NS_UNAVAILABLE;




    /**
     * Return an invoice with all the fields from the template but the invoice
     * number and paypalID of another invoice
     */
    -(PPRetailInvoice* _Nullable)invoiceFromInvoice:(PPRetailInvoice* _Nullable)invoice;




@end