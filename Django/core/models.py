from django.db import models

class TimeStampedModel(models.Model):
    
    """ Time Stamped Model """
    
    creates = models.DateTimeField()
    updated = models.DateTimeField()
    
    class Meta:
        abstract = True