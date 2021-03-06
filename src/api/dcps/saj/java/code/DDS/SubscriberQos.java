/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2011 PrismTech
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE 
 *
 *   for full copyright notice and license terms. 
 *
 */

package DDS;


public final class SubscriberQos 
{
  public DDS.PresentationQosPolicy presentation = null;
  public DDS.PartitionQosPolicy partition = null;
  public DDS.GroupDataQosPolicy group_data = null;
  public DDS.EntityFactoryQosPolicy entity_factory = null;
  public DDS.ShareQosPolicy share = null;
  
  public SubscriberQos ()
  {
  } // ctor

  public SubscriberQos (DDS.PresentationQosPolicy _presentation, DDS.PartitionQosPolicy _partition, DDS.GroupDataQosPolicy _group_data, DDS.EntityFactoryQosPolicy _entity_factory, DDS.ShareQosPolicy _share)
  {
    presentation = _presentation;
    partition = _partition;
    group_data = _group_data;
    entity_factory = _entity_factory;
    share = _share;
  } // ctor

} // class SubscriberQos
